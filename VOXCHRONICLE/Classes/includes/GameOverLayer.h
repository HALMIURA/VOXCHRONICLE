//
//  GameOverLayer.h
//  VOXCHRONICLE
//
//  Created by giginet on 2013/1/31.
//
//

#ifndef __VOXCHRONICLE__GameOverLayer__
#define __VOXCHRONICLE__GameOverLayer__

#include <iostream>
#include "MainScene.h"
#include "cocos2d.h"

using namespace cocos2d;

class GameOverLayer :public CCLayer {
 private:
  MainScene* _main;
  void addGameOverButtons();
 protected:
  virtual void buildUI();
  void replayButtonPressed(CCObject *sender);
  void titleButtonPressed(CCObject *sender);
 public:
  GameOverLayer(MainScene* main);
  ~GameOverLayer();
};


#endif /* defined(__VOXCHRONICLE__GameOverLayer__) */