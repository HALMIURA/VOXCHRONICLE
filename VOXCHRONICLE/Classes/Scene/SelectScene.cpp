//
//  SelectScene.cpp
//  VOXCHRONICLE
//
//  Created by giginet on 2013/2/26.
//
//

#include "SelectScene.h"
#include "MainScene.h"
#include "MainMenuScene.h"
#include "SimpleAudioEngine.h"
#include "FileUtils.h"
#include "SaveData.h"

typedef enum {
  SelectSceneZOrderBackground,
  SelectSceneZOrderButton,
  SelectSceneZOrderFrame
} SelectSceneZOrder;

typedef enum {
  SelectSceneTagMenu,
  SelectSceneTagBackMenu,
  SelectSceneTagEasyFrame,
  SelectSceneTagHardFrame
} SelectSceneTag;

bool SelectScene::init() {
  if ( !CCLayer::init() ) {
    return false;
  }
  
  _thumbnails = CCArray::create();
  _thumbnails->retain();
  
  CCDirector* director = CCDirector::sharedDirector();
  
  CCSprite* background = CCSprite::create("select_background.png");
  background->setPosition(ccp(director->getWinSize().width / 2.0f, director->getWinSize().height / 2.0f));
  this->addChild(background, SelectSceneZOrderBackground);
  
  CCMenuItemSprite* easyButton = CCMenuItemSprite::create(this->buttonNode("easy", "simple_thumbnail.png", false),
                                                          this->buttonNode("easy", "simple_thumbnail.png", true),
                                                          this,
                                                          menu_selector(SelectScene::onEasyButtonPressed));
  
  CCMenuItemSprite* hardButton = CCMenuItemSprite::create(this->buttonNode("hard", "field_thumbnail.png", false),
                                                          this->buttonNode("hard", "field_thumbnail.png", true),
                                                          this,
                                                          menu_selector(SelectScene::onHardButtonPressed));
  CCMenu* mainMenu = CCMenu::create(easyButton, hardButton, NULL);
  mainMenu->alignItemsHorizontallyWithPadding(105);
  mainMenu->setAnchorPoint(ccp(0.5, 0.5));
  
  mainMenu->setPosition(ccp(director->getWinSize().width / 2.0 + 2, 127));
  this->addChild(mainMenu, SelectSceneZOrderButton, SelectSceneTagMenu);
  
  CCMenuItemImage* backButton = CCMenuItemImage::create("select_back.png",
                                                        "select_back_pressed.png",
                                                        this,
                                                        menu_selector(SelectScene::onBackButtonPressed));
  CCMenu* backMenu = CCMenu::create(backButton, NULL);
  backMenu->setPosition(ccp(director->getWinSize().width / 2.0f, 45));
  _nextMap = NULL;
  this->addChild(backMenu, SelectSceneZOrderButton, SelectSceneTagBackMenu);
  
  CCSprite* map = CCSprite::create("select_map.png");
  map->setPosition(ccp(director->getWinSize().width / 2.0f, 255));
  this->addChild(map);
  
  CCSprite* easyFrame = CCSprite::create("select_easy_frame.png");
  easyFrame->setPosition(ccp(134, 140));
  this->blinkSprite(easyFrame, 0.5f);
  this->addChild(easyFrame, SelectSceneZOrderFrame, SelectSceneTagEasyFrame);
  
  CCSprite* hardFrame = CCSprite::create("select_hard_frame.png");
  hardFrame->setPosition(ccp(350, 140));
  this->blinkSprite(hardFrame, 0.5f);
  this->addChild(hardFrame, SelectSceneZOrderFrame, SelectSceneTagHardFrame);
  
  this->createThumbnails();
  
  return true;
}

SelectScene::SelectScene() {
}

SelectScene::~SelectScene() {
  _thumbnails->release();
  if (_nextMap) {
    _nextMap->release();
  }
}

CCSprite* SelectScene::blinkSprite(CCSprite* sprite, float speed) {
  CCSequence* blink = CCSequence::createWithTwoActions(CCFadeTo::create(speed, 128),
                                                       CCFadeTo::create(speed, 255));
  sprite->runAction(CCRepeatForever::create(blink));
  return sprite;
}

CCNode* SelectScene::buttonNode(const char *key, const char* thumbnail, bool pressed) {
  CCNode* node = CCNode::create();
  if (string(thumbnail).length() > 0) {
    CCSprite* thumbnailSprite = CCSprite::create(thumbnail);
    thumbnailSprite->setPosition(ccp(82, 120));
    node->addChild(thumbnailSprite);
  }
  CCSprite* window = CCSprite::create("select_window.png");
  node->addChild(window);
  window->setPosition(ccp(82, 92));
  stringstream ss;
  ss << "select_" << key;
  if (pressed) {
    ss << "_pressed";
  }
  ss << ".png";
  CCSprite* label = CCSprite::create(ss.str().c_str());
  label->setPosition(ccp(82, 50));
  node->addChild(label);
  node->setContentSize(window->getTextureRect().size);
  return node;
}

void SelectScene::createThumbnails() {
  const int x[] = {190, 240, 290.5, 165, 215, 265, 315};
  const int y[] = {262, 262, 261, 303, 303, 303, 303};
  LuaObject* obj = LuaObject::create("setting");
  shared_ptr<CCLuaValueArray> maps = obj->getArray("maps");
  int i = 0;
  for (CCLuaValueArrayIterator it = maps->begin(); it != maps->end(); ++it, ++i) {
    string mapName = it->stringValue();
    if (mapName.length() > 0) {
      string thumbnail = "";
      if (SaveData::sharedData()->isClearedMap(mapName.c_str())) {
        thumbnail = (mapName + string("_icon.png")).c_str();
      } else {
        thumbnail = (mapName + string("_icon_disable.png")).c_str();
      }
      CCSprite* sprite = CCSprite::create(thumbnail.c_str());
      sprite->setPosition(ccp(x[i], y[i]));
      this->addChild(sprite);
      _thumbnails->addObject(sprite);
    }
  }
}

void SelectScene::onEasyButtonPressed(cocos2d::CCObject *sender) {
  CocosDenshion::SimpleAudioEngine::sharedEngine()->stopBackgroundMusic(true);
  CocosDenshion::SimpleAudioEngine::sharedEngine()->playEffect(FileUtils::getFilePath("SE/easy_decide.mp3").c_str());
  LuaObject* obj = LuaObject::create("setting");
  string stage = obj->getString("easyMap");
  _nextMap = new Map(stage.c_str());
  
  CCSprite* frame = (CCSprite*)this->getChildByTag(SelectSceneTagEasyFrame);
  this->blinkSprite(frame, 0.05);
  this->scheduleOnce(schedule_selector(SelectScene::startGame), 3.0f); // 遅延してゲーム開始
  this->disableButtons();
}

void SelectScene::onHardButtonPressed(cocos2d::CCObject *sender) {
  CocosDenshion::SimpleAudioEngine::sharedEngine()->stopBackgroundMusic(true);
  CocosDenshion::SimpleAudioEngine::sharedEngine()->playEffect(FileUtils::getFilePath("SE/hard_decide.mp3").c_str());
  LuaObject* obj = LuaObject::create("setting");
  string stage = obj->getString("hardMap");
  _nextMap = new Map(stage.c_str());
  CCSprite* frame = (CCSprite*)this->getChildByTag(SelectSceneTagHardFrame);
  this->blinkSprite(frame, 0.05);
  this->scheduleOnce(schedule_selector(SelectScene::startGame), 3.0f); // 遅延してゲーム開始
  this->disableButtons();
}

void SelectScene::startGame(cocos2d::CCObject *sender) {
  CCScene* scene = CCScene::create();
  MainScene* layer = new MainScene();
  layer->autorelease();
  layer->init(_nextMap);
  scene->addChild(layer);
  
  CCTransitionFade* transition = CCTransitionFade::create(0.5, scene);
  CCDirector::sharedDirector()->replaceScene(transition);
}

void SelectScene::onBackButtonPressed(cocos2d::CCObject *sender) {
  CocosDenshion::SimpleAudioEngine::sharedEngine()->playEffect(FileUtils::getFilePath("SE/menu_cancel.mp3").c_str());
  CCScene* scene = CCScene::create();
  MainMenuScene* layer = new MainMenuScene(false);
  layer->autorelease();
  scene->addChild(layer);
  CCTransitionSlideInB* transition = CCTransitionSlideInB::create(0.25f, scene);
  CCDirector::sharedDirector()->replaceScene(transition);
  this->disableButtons();
}

void SelectScene::disableButtons() {
  CCMenu* menu = (CCMenu*)this->getChildByTag(SelectSceneTagMenu);
  CCMenu* back = (CCMenu*)this->getChildByTag(SelectSceneTagBackMenu);
  menu->setEnabled(false);
  back->setEnabled(false);
}