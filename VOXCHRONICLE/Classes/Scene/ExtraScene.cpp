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

bool ExtraScene::init() {
  if (!CCLayer::init()) {
    return false;
  }
  
  CCDirector* director = CCDirector::sharedDirector();
  CCPoint center = ccp(director->getWinSize().width / 2.0f, director->getWinSize().height / 2.0f);
  
  CCSprite* background = CCSprite::create("select_background.png");
  background->setPosition(center);
  this->addChild(background);
  
  CCMenuItemImage* soundtest = CCMenuItemImage::create("soundtest_button.png",
                                                       "soundtest_button_pressed.png",
                                                       this,
                                                       menu_selector(ExtraScene::onSoundTestButtonPressed));
  CCMenuItemImage* achievement = CCMenuItemImage::create("achievement_button.png",
                                                         "achievement_button_pressed.png",
                                                         this,
                                                         menu_selector(ExtraScene::onAchievementButtonPressed));
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
  CCMenu* extraMenu = CCMenu::create(dictionary, soundtest, achievement, credit, NULL);
  CCMenu* backMenu = CCMenu::createWithItem(back);
  
  extraMenu->alignItemsVerticallyWithPadding(20);
  
  extraMenu->setPosition(ccp(250, center.y));
  backMenu->setPosition(ccp(17.5, center.y));
  
  this->addChild(extraMenu);
  this->addChild(backMenu);
  
  return true;
}

void ExtraScene::onSoundTestButtonPressed(cocos2d::CCObject *sender) {
}

void ExtraScene::onAchievementButtonPressed(cocos2d::CCObject *sender) {
}

void ExtraScene::onDictionaryButtonPressed(cocos2d::CCObject *sender) {
}

void ExtraScene::onCreditButtonPressed(cocos2d::CCObject *sender) {
}

void ExtraScene::onBackButtonPressed(cocos2d::CCObject *sender) {
  CocosDenshion::SimpleAudioEngine::sharedEngine()->playEffect(FileUtils::getFilePath("SE/decide.mp3").c_str());
  CCScene* scene = CCScene::create();
  MainMenuScene* layer = new MainMenuScene(false);
  layer->autorelease();
  scene->addChild(layer);
  CCTransitionSlideInL* transition = CCTransitionSlideInL::create(0.25f, scene);
  CCDirector::sharedDirector()->pushScene(transition);
}