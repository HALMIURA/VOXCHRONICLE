//
//  GKAchievementManager.cpp
//  VOXCHRONICLE
//
//  Created by giginet on 2013/4/1.
//
//

#include "CCAchievementManager.h"
#import <GameKit/GameKit.h>

static CCAchievementManager* _manager = NULL;

CCAchievementManager* CCAchievementManager::sharedManager() {
  if (_manager == NULL) {
    _manager = new CCAchievementManager();
  }
  return _manager;
}

CCAchievementManager::CCAchievementManager() {
  
}

CCAchievementManager::~CCAchievementManager() {
}

void CCAchievementManager::reportAchievement(const char *identifier, float percent, bool showBanner, function<void (const char* identifier, bool error)> onComplete) {
  GKAchievement* achievement = [[GKAchievement alloc] initWithIdentifier:[NSString stringWithCString:identifier encoding:NSUTF8StringEncoding]];
  achievement.percentComplete = percent;
  achievement.showsCompletionBanner = showBanner;
  [achievement reportAchievementWithCompletionHandler:^(NSError *error) {
    if (onComplete != nil) {
      onComplete(identifier, error != nil);
    }
  }];
}

void CCAchievementManager::reportAchievements(cocos2d::CCArray *identifiers, cocos2d::CCArray *percents, bool showBanner, function<void (CCArray* identifiers, bool error)> onComplete) {
  NSArray* achievements = [NSArray array];
  
  for (int i = 0; i < identifiers->count(); ++i) {
    const char* identifierString = ((CCString*)identifiers->objectAtIndex(0))->getCString();
    GKAchievement* achievement = [[GKAchievement alloc] initWithIdentifier:[NSString stringWithCString:identifierString encoding:NSUTF8StringEncoding]];
    float percent = (float)((CCInteger*)percents->objectAtIndex(i))->getValue() / 100.0;
    achievement.percentComplete = percent;
    achievement.showsCompletionBanner = showBanner;
    [achievement autorelease];
  }
  [GKAchievement reportAchievements:achievements
              withCompletionHandler:^(NSError *error) {
                onComplete(identifiers, error != nil);
              }];
}

void CCAchievementManager::loadAhievements(function<void (CCArray* achievements, bool error)> onCompleter) {
  [GKAchievement loadAchievementsWithCompletionHandler:^(NSArray *achievements, NSError *error) {
    for (GKAchievement* achievement in achievements) {
    }
  }];
}

bool CCAchievementManager::isAuthenticated() {
  return [GKLocalPlayer localPlayer].authenticated;
}