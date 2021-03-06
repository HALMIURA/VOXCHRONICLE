//
//  ExtraScene.cpp
//  VOXCHRONICLE
//
//  Created by giginet on 2013/3/18.
//
//

#include "ExtraScene.h"
#include "FileUtils.h"
#include "SimpleAudioEngine.h"
#include "MainMenuScene.h"
#include "Map.h"
#include "StaffRollScene.h"
#include "DictionaryScene.h"
#include "CCAchievementManager.h"
#include "AchievementScene.h"
#include "FreePlayScene.h"

bool ExtraScene::init() {
  if (!CCLayer::init()) {
    return false;
  }
  
  CCDirector* director = CCDirector::sharedDirector();
  CCPoint center = ccp(director->getWinSize().width / 2.0f, director->getWinSize().height / 2.0f);
  
  CCSprite* background = CCSprite::create("select_background.png");
  background->setPosition(center);
  this->addChild(background);
  
  CCMenuItemImage* freeplay = CCMenuItemImage::create("freeplay_button.png",
                                                      "freeplay_button_pressed.png",
                                                      this,
                                                      menu_selector(ExtraScene::onFreePlayButtonPressed));
  CCMenuItemImage* soundtest = CCMenuItemImage::create("soundtest_button.png",
                                                       "soundtest_button_pressed.png",
                                                       this,
                                                       menu_selector(ExtraScene::onSoundTestButtonPressed));
  CCMenuItemImage* achievement = CCMenuItemImage::create("achievement_button.png",
                                                         "achievement_button_pressed.png",
                                                         "achievement_button_disable.png",
                                                         this,
                                                         menu_selector(ExtraScene::onAchievementButtonPressed));
  achievement->setEnabled(CCAchievementManager::sharedManager()->isAuthenticated()); // GameCenterにログインしていないとき、無効化
  CCMenuItemImage* dictionary = CCMenuItemImage::create("dictionary_button.png",
                                                        "dictionary_button_pressed.png",
                                                        this,
                                                        menu_selector(ExtraScene::onDictionaryButtonPressed));
  CCMenuItemImage* credit = CCMenuItemImage::create("credit_button.png",
                                                    "credit_button_pressed.png",
                                                    this,
                                                    menu_selector(ExtraScene::onCreditButtonPressed));
  CCMenuItemImage* back = CCMenuItemImage::create("extra_back.png",
                                                  "extra_back_pressed.png",
                                                  this,
                                                  menu_selector(ExtraScene::onBackButtonPressed));
  CCMenu* extraMenu = CCMenu::create(freeplay, soundtest, dictionary, achievement, credit, NULL);
  CCMenu* backMenu = CCMenu::createWithItem(back);
  
  extraMenu->alignItemsVerticallyWithPadding(10);
  
  extraMenu->setPosition(ccp(250, center.y));
  backMenu->setPosition(ccp(40, center.y));
  
  this->addChild(extraMenu);
  this->addChild(backMenu);
  
  return true;
}

void ExtraScene::onExit() {
  CCLayer::onExit();
}

void ExtraScene::onFreePlayButtonPressed(cocos2d::CCObject *sender) {
  CocosDenshion::SimpleAudioEngine::sharedEngine()->playEffect(FileUtils::getFilePath("SE/menu_decide.mp3").c_str());
  FreePlayScene* scene = FreePlayScene::create("freeplay.lua", false);
  nextScene(scene, true);
}

void ExtraScene::onSoundTestButtonPressed(cocos2d::CCObject *sender) {
  CocosDenshion::SimpleAudioEngine::sharedEngine()->playEffect(FileUtils::getFilePath("SE/menu_decide.mp3").c_str());
  FreePlayScene* scene = FreePlayScene::create("soundtest.lua", false);
  nextScene(scene, true);
}

void ExtraScene::onAchievementButtonPressed(cocos2d::CCObject *sender) {
  AchievementScene::create();
  CocosDenshion::SimpleAudioEngine::sharedEngine()->playEffect(FileUtils::getFilePath("SE/decide.mp3").c_str());
}

void ExtraScene::onDictionaryButtonPressed(cocos2d::CCObject *sender) {
  CocosDenshion::SimpleAudioEngine::sharedEngine()->playEffect(FileUtils::getFilePath("SE/menu_decide.mp3").c_str());
  DictionaryScene* scene = DictionaryScene::create();
  SimpleAudioEngine::sharedEngine()->stopBackgroundMusic();
  this->nextScene(scene, true);
}

void ExtraScene::onCreditButtonPressed(cocos2d::CCObject *sender) {
  CocosDenshion::SimpleAudioEngine::sharedEngine()->playEffect(FileUtils::getFilePath("SE/decide.mp3").c_str());
  CCArray* array = CCArray::create();
  array->addObject(CCString::create("1a_simple"));
  array->addObject(CCString::create("2a_forest"));
  array->addObject(CCString::create("3a_ruin"));
  
  StaffRollScene* scene = new StaffRollScene(array);
  scene->autorelease();
  CocosDenshion::SimpleAudioEngine::sharedEngine()->stopBackgroundMusic();
  this->nextScene(scene, false);
}

void ExtraScene::onBackButtonPressed(cocos2d::CCObject *sender) {
  CocosDenshion::SimpleAudioEngine::sharedEngine()->playEffect(FileUtils::getFilePath("SE/menu_cancel.mp3").c_str());
  CCScene* scene = CCScene::create();
  MainMenuScene* layer = new MainMenuScene(false);
  layer->autorelease();
  scene->addChild(layer);
  CCTransitionSlideInL* transition = CCTransitionSlideInL::create(0.25f, scene);
  CCDirector::sharedDirector()->replaceScene(transition);
}

void ExtraScene::nextScene(CCLayer* layer, bool slide) {
  CCScene* scene = CCScene::create();
  scene->addChild(layer);
  if (slide) {
    CCTransitionSlideInT* transition = CCTransitionSlideInT::create(0.25f, scene);
    CCDirector::sharedDirector()->replaceScene(transition);
  } else {
    CCTransitionFade* transition = CCTransitionFade::create(0.2f, scene);
    CCDirector::sharedDirector()->replaceScene(transition);
  }
}