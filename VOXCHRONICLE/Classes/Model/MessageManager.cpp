//
//  MessageManager.cpp
//  VOXCHRONICLE
//
//  Created by giginet on 2013/2/6.
//
//

#include <algorithm>
#include <boost/shared_ptr.hpp>
#include <boost/xpressive/xpressive.hpp>
#include "MessageManager.h"
#include "LuaObject.h"

using namespace boost::xpressive;

MessageManager* MessageManager::_instance = NULL;

MessageManager* MessageManager::sharedManager() {
  if (!_instance) _instance = new MessageManager();
  return _instance;
}

void MessageManager::purgeMessageManager() {
  if (_instance) {
    _instance->_defaultWindow->unscheduleAllSelectors();
    _instance->release();
    _instance = NULL;
  }
}

MessageManager::MessageManager() {
  _defaultWindow = NULL;
}

MessageManager::~MessageManager() {
  if (_defaultWindow) {
    _defaultWindow->release();
  }
}

void MessageManager::setDefaultMessageWindow(MessageWindow *window) {
  if (_defaultWindow) {
    _defaultWindow->release();
  }
  _defaultWindow = window;
  if (window) {
    window->retain();
  }
}

void MessageManager::pushMessage(const char *message) {
  if (_defaultWindow) {
    _defaultWindow->pushMessage(message);
  }
}

void MessageManager::pushMessage(const char *message, cocos2d::CCDictionary *dict) {
  // <で始まって>で終わる文字列にマッチする正規表現で検索
  sregex regex = sregex::compile("{(.+)}"); // #{name}みたいなタグを取得する
  smatch m;
  string origin = string(message);
  string::const_iterator begin = origin.begin();
  string::const_iterator end = origin.end();
  
  while (regex_search(begin, end, m, regex)) {
    string key = m.str(1); // 後方参照で name が取れてるはず
    string after = "";
    if ( dict->objectForKey(key) ) {
      CCString* value = (CCString*)dict->objectForKey(key);
      after = value->getCString();
    }
    origin = regex_replace(origin, regex, after);
    begin = origin.begin();
    end = origin.end();
  }
  this->pushMessage(origin.c_str());
}

void MessageManager::pushRandomMessageFromLua(const char *luaName) {
  CCDictionary* dict = CCDictionary::create();
  this->pushMessage(luaName, dict);
}

void MessageManager::pushRandomMessageFromLua(const char *luaName, cocos2d::CCDictionary *dict) {
  LuaObject* obj = new LuaObject(luaName);
  shared_ptr<CCLuaValueArray> array = obj->getArray();
  CCArray* messages = CCArray::create();
  for (CCLuaValueArrayIterator it = array->begin(); it != array->end(); ++it) {
    CCString* str = CCString::create(it->stringValue());
    messages->addObject(str);
  }
  CCString* random = (CCString*)messages->randomObject();
  this->pushMessage(random->getCString(), dict);
}

void MessageManager::pushRandomMessageFromFunction(const char *scriptFile, CharacterManager *characterManager, EnemyManager *enemyManager) {
  LuaObject* lua = LuaObject::create(scriptFile);
  lua_State* L = lua->getLuaEngineWithLoad()->getLuaState();
  if (lua_isfunction(L, lua_gettop(L))) {
    lua->pushCCObject(characterManager, "CharacterManager");
    lua->pushCCObject(enemyManager, "EnemyManager");
    if (lua_pcall(L, 2, 1, 0)) {
      cout << lua_tostring(L, lua_gettop(L)) << endl;
    }
    boost::shared_ptr<CCLuaValueArray> messages = lua->getArray();
    if (messages->size() > 0) {
      std::random_shuffle(messages->begin(), messages->end());
      CCLuaValue value = messages->front();
      string message = value.stringValue();
      this->pushMessage(message.c_str());
    }
  }
}