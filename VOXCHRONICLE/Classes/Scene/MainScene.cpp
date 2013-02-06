//
//  MainScene.cpp
//  VOXCHRONICLE
//
//  Created by giginet on 2012/8/28.
//
//

#include <sstream>
#include <cstdlib>
#include <boost/random.hpp>
#include <boost/function.hpp>
#include <boost/bind.hpp>

#include "MainScene.h"
#include "Enemy.h"
#include "MapSelector.h"
#include "LuaObject.h"
#include "FileUtils.h"
#include "BlinkLayer.h"
#include "TitleScene.h"
#include "PauseLayer.h"
#include "GameOverLayer.h"
#include "Ground.h"
#include "VQString.h"

using namespace std;
using namespace cocos2d;
using namespace VISS;

const int PAUSE_LAYER_TAG = 10;

bool MainScene::init() {
  LuaObject* setting = new LuaObject("Script/setting", "Setting");
  setting->autorelease();
  Map* map = new Map(setting->getString("initialMap"));
  map->autorelease();
  return this->init(map);
}

bool MainScene::init(Map* map) {
  if ( !CCLayer::init() ) {
    return false;
  }
  Music* music = new Music(3);
  music->autorelease();
  music->setTrackDidBackFunction(boost::bind(&MainScene::trackDidBack, this, _1, _2, _3));
  music->setTrackDidFinishFunction(boost::bind(&MainScene::trackDidFinishPlaying, this, _1, _2, _3, _4));
  music->setTrackWillFinishFunction(boost::bind(&MainScene::trackWillFinishPlaying, this, _1, _2, _3, _4));
  _pausedTargets = NULL;
  
  _currentSkillInfo.skillTrackName = "";
  _currentSkillInfo.type = SkillPerformTypeNone;
  _currentSkillInfo.skill = NULL;
  
  _turnCount = 0;
  _mapTurnCount = 0;
  
  LuaObject* setting = new LuaObject("Script/setting", "Setting");
  setting->autorelease();
  
  CCDirector* director = CCDirector::sharedDirector();
  
  // 背景の追加
  _ground = new Ground("cyber");
  _ground->stop();
  this->addChild(_ground);
  
  // EnemyManager
  _enemyManager = EnemyManager::create();
  _enemyManager->retain();
  this->addChild(_enemyManager);
  
  // フォーカスの追加
  _focus = CCSprite::create(FileUtils::getFilePath("Image/focus.png").c_str());
  _focus->retain();
  _focus->setVisible(false);
  _focus->setAnchorPoint(ccp(0.5f, 0.0f));
  this->addChild(_focus);
  
  _controller = Controller::create();
  _controller->retain();
  _characterManager = new CharacterManager();
  _characterManager->retain();
  CCSize size = director->getWinSize();
  this->addChild(_controller);
  _characterManager->setLevel(setting->getInt("initialLevel"));
  
  map->retain();
  _map = map;
  _level = _map->createInitialLevel();
  _enemyManager->setLevel(_level);
  
  MusicSet* musicSet = _map->getCurrentMusic(_level);
  musicSet->autorelease();
  musicSet->preloadAllTracks();
  
  _musicManager = new MusicManager(music, musicSet, _enemyManager, _characterManager);
  _musicManager->retain();
  
  _state = VCStateIntro;
  
  _messageWindow = new MessageWindow(FONT_NAME, 16, CCSizeMake(300, 17.5));
  _messageWindow->retain();
  _messageWindow->setPosition(ccp(director->getWinSize().width / 2.0f, director->getWinSize().height - 45));
  this->addChild(_messageWindow);
  
  _mapSelector = NULL;
  
  this->scheduleUpdate();
  _preLevel = _level->getLevel();
  
  _statusLayer = new StatusLayer();
  _statusLayer->retain();
  
  this->addChild(_statusLayer);
  this->updateGUI();
  _controller->updateSkills(_characterManager);
  
  _qteTrigger = NULL;
  _isLevelUped = false;
  
  return true;
}

MainScene::~MainScene() {
  _musicManager->getMusic()->stop();
  _map->release();
  _messageWindow->release();
  _musicManager->release();
  _controller->release();
  _enemyManager->release();
  _characterManager->release();
  _statusLayer->release();
  _focus->release();
  if (_mapSelector != NULL) {
    _mapSelector->release();
  }
  if (_pausedTargets != NULL) {
    _pausedTargets->release();
  }
}

void MainScene::update(float dt) {
  if (_state == VCStateMain) {
    _controller->setEnable(!_characterManager->isPerforming());
    if (_characterManager->getHP() <= 0) {
      this->onGameOver();
    }
  }
}

Music* MainScene::getMusic() {
  return _musicManager->getMusic();
}

Map* MainScene::getMap() {
  return _map;
}

void MainScene::onEnterTransitionDidFinish() {
  _controller->setEnable(false);
  _musicManager->pushIntroTracks();
  _musicManager->getMusic()->play();
  _statusLayer->setMarkerDuration(_musicManager->getMusic()->getTrack(0)->getDuration() / 4.0f);
  _messageWindow->pushMessage("オクスの世界へようこそ！！！");
}

void MainScene::trackDidBack(Music *music, Track *currentTrack, int trackNumber) {
  if (_state == VCStateMain) {
    _enemyManager->nextTurn(_characterManager);
    CCObject* obj = NULL;
    CCARRAY_FOREACH(_enemyManager->getEnemies(), obj) {
      Enemy* enemy = (Enemy*)obj;
      if (enemy->getRow() == 0) {
        int damage = floor(0.5 + enemy->getAttack() * _characterManager->getLevelOffsetRate(enemy->getLevel(), _characterManager->getLevel()));
        _characterManager->damage(damage);
        _enemyManager->removeEnemy(enemy);
      }
    }
    
    this->addDamageEffect();
    this->updateFocus();
    this->updateGUI();
  }
}

void MainScene::trackWillFinishPlaying(Music *music, Track *currentTrack, Track *nextTrack, int trackNumber) {
  if (_state == VCStateIntro) {
    _musicManager->setIntroCount(_musicManager->getIntroCount() + 1);
    int maxIntroCount = _musicManager->getMusicSet()->getIntroCount();
    if (_musicManager->getIntroCount() == maxIntroCount) { // イントロが終わったとき
      _musicManager->setIntroCount(0);
      _controller->setEnable(true);
      _state = VCStateMain;
      _ground->play();
    }
  }
  if (_state == VCStateFinish) {
    _musicManager->setFinishCount(_musicManager->getFinishCount() + 1);
    int maxFinishCount = _musicManager->getMusicSet()->getFinishCount();
    if (_musicManager->getFinishCount() == maxFinishCount) { // フィニッシュ曲が終わったとき
      _musicManager->setFinishCount(0);
      this->onFinishTracksCompleted();
    }
  }
  if (_state == VCStateMain) {
    Skill* skill = NULL;
    if (_characterManager->isPerforming()) {
      skill = _characterManager->getCurrentSkill();
    } else {
      skill = _controller->currentTriggerSkill();
    }
    _musicManager->pushNextTracks(skill, _currentSkillInfo);
    if (_isLevelUped) { // 前のターンでレベルが上がっていたら
      _isLevelUped = false;
      if (_level->getLevel() == _map->getMaxLevel() && _map->isBossStage()) { // 最高レベルのとき、かつボス面のとき
        // 道中フィニッシュ曲を流す。フィニッシュ曲が終わったらボス面に切り替えてイントロ曲を流す
        _state = VCStateFinish;
        _controller->setEnable(false);
        _musicManager->getMusic()->removeAllNextTracks();
        _musicManager->pushFinishTracks();
      } else if (_level->getLevel() >= _map->getMaxLevel() + 1) {
        _state = VCStateFinish;
        _controller->setEnable(false);
        _musicManager->getMusic()->removeAllNextTracks();
        _musicManager->pushFinishTracks();
      }
    }
  }
  this->updateGUI(); // GUI更新
}

void MainScene::trackDidFinishPlaying(Music *music, Track *finishedTrack, Track *nextTrack, int trackNumber) {
  
  // メインの動きを実行
  Skill* skill = _currentSkillInfo.skill;
  SkillPerformType performType = _currentSkillInfo.type;
  string name = _currentSkillInfo.skillTrackName;
  
  bool isHit = true; // ヒットしたかどうか
  /* 以下のとき、ヒットしていない
   1. 対象が自分以外の技を使用し、対象の全てについて
   ・盾やバリアに弾かれた
   　　　　　　 ・盾やバリアを破壊した場合、与ダメージが0でもヒットした扱いにする
   ・本来、ダメージを与えられる技を使ったはずなのに被ダメージが0である
   　　　　　   ・例えばノックバックはダメージが0でも、本来与えるダメージが0なのでヒットしている
   ・本来ダメージが与えられるはずなのに、耐性やレベル補正でダメージが0だった場合、ヒットしていない
   */
  if (skill && performType == SkillPerformTypeSuccess) {
    
    int preExp = _characterManager->getExp();
    CCDictionary* info = _enemyManager->performSkill(skill, _characterManager); // ここで経験値が貰える
    CCArray* enemies = (CCArray*)info->objectForKey("enemies");
    CCArray* damages = (CCArray*)info->objectForKey("damages");
    CCArray* damageTypes = (CCArray*)info->objectForKey("damageTypes");
    int enemyCount = enemies->count();
    for (int i = 0; i < enemyCount; ++i) {
      isHit = true;
      Enemy* enemy = (Enemy*)enemies->objectAtIndex(i);
      CCLabelAtlas* damageLabel = CCLabelAtlas::create(boost::lexical_cast<string>(((CCInteger*)damages->objectAtIndex(i))->getValue()).c_str(),
                                                       FileUtils::getFilePath("Image/damage_number.png").c_str(), 50, 100, '0');
      // ダメージが0かつ、元々ダメージのない技じゃないかつ、アイテムも破壊していないとき、ヒットしていない状態にしてやる
      int damage = ((CCInteger*)damages->objectAtIndex(i))->getValue();
      DamageType damageType = (DamageType)((CCInteger*)damageTypes->objectAtIndex(i))->getValue();
      if (damage == 0 && damageType != DamageTypeBarrierBreak && damageType != DamageTypeShieldBreak && damageType != DamageTypeNoDamage) {
        isHit = false;
      } else {
        // ヒットしたとき、敵キャラを点滅させる
        enemy->runAction(CCRepeat::create(CCSequence::createWithTwoActions(CCFadeTo::create(0.05, 64), CCFadeTo::create(0.05, 255)), 3));
      }
      damageLabel->setPosition(enemy->getPosition());
      float scale = enemy->getCurrentScale(enemy->getRow());
      damageLabel->setScale(scale);
      this->addChild(damageLabel);
      damageLabel->runAction(CCSequence::create(CCFadeIn::create(0.2),
                                                CCDelayTime::create(0.5),
                                                CCFadeOut::create(0.2),
                                                CCCallFuncN::create(damageLabel, callfuncN_selector(MainScene::removeNode)),
                                                NULL));
    }
    
    // カットインを追加する
    string cutinFile = "Image/" + string(skill->getIdentifier()) + "_icon.png";
    CCSprite* cutin = CCSprite::create(cutinFile.c_str());
    if (cutin != NULL) {
      const int height = 100;
      cutin->setPosition(ccp(0, height));
      float duration = _musicManager->getMusic()->getCurrentMainTrack()->getDuration();
      CCSize size = CCDirector::sharedDirector()->getWinSize();
      if (isHit) {
        // 成功したとき、カットインを挿入
        cutin->runAction(CCSequence::create(CCMoveTo::create(duration * 0.125, ccp(size.width / 2.0, height)),
                                            CCDelayTime::create(duration * 0.25),
                                            CCMoveTo::create(duration * 0.125, ccp(size.width, height)),
                                            CCCallFuncN::create(this, callfuncN_selector(MainScene::removeNode)),
                                            NULL));
      } else {
        // ミスったとき、コマンドを落とす
        cutin->runAction(CCSequence::create(CCMoveTo::create(duration * 0.125, ccp(size.width / 2.0, height)),
                                            CCRotateBy::create(duration * 0.125, 45),
                                            CCDelayTime::create(duration * 0.125),
                                            CCMoveTo::create(duration * 0.125, ccp(size.width / 2.0, -100)),
                                            CCCallFuncN::create(this, callfuncN_selector(MainScene::removeNode)),
                                            NULL));
      }
      this->addChild(cutin);
      
    }
    
    if (isHit) {
      // ヒットしたとき、SEがあればSEをならしてやる
      if (enemies->count() > 0) { // 対象が1体以上いるとき
        DamageType damageType = (DamageType)((CCInteger*)damageTypes->objectAtIndex(0))->getValue();
        stringstream seStream;
        // 今は当たった敵1体目のダメージタイプをとってきてならしているが、
        // 複数体に同時に当たったときは遅延して順番にならしても良さそう
        if (damageType == DamageTypeShieldBreak) {
          seStream << "shield_break.mp3";
        } else if (damageType == DamageTypeBarrierBreak) {
          seStream << "barrier_break.mp3";
        } else if (skill->hasSE()) {
          // 対象が自分、もしくは対象が1体以上いたとき、ダメージ効果音をならします
          seStream << "SE/"<< skill->getIdentifier() << "_effect.mp3";
        }
        CocosDenshion::SimpleAudioEngine::sharedEngine()->playEffect(FileUtils::getFilePath(seStream.str().c_str()).c_str());
      }  else if (skill->getRange() == SkillRangeSelf && skill->hasSE()) { // 対象が自分だけ、かつSEを持っているとき
        stringstream seStream;
        // 効果音をならします
        seStream << "SE/"<< skill->getIdentifier() << "_effect.mp3";
        CocosDenshion::SimpleAudioEngine::sharedEngine()->playEffect(FileUtils::getFilePath(seStream.str().c_str()).c_str());
      }
    } else if (!isHit) { // ヒットしていないとき、強制的にミス音にする
      //name = "miss"; // 差し替えたので今は強制的にミス音にできない。後で考える
      if (enemyCount == 0) {
        // 誰もいないときピロリ音
        CocosDenshion::SimpleAudioEngine::sharedEngine()->playEffect(FileUtils::getFilePath("miss.caf").c_str());
      } else {
        DamageType damageType = (DamageType)((CCInteger*)damageTypes->objectAtIndex(0))->getValue();
        if (damageType == DamageTypePhysicalInvalid) {
          // 1体だけ敵がいるのに当たらず、盾持ちだったとき
          CocosDenshion::SimpleAudioEngine::sharedEngine()->playEffect(FileUtils::getFilePath("shield_invalid.mp3").c_str());
        } else if (damageType == DamageTypeMagicalInvalid) {
          // バリア持ちだったとき
          CocosDenshion::SimpleAudioEngine::sharedEngine()->playEffect(FileUtils::getFilePath("barrier_invalid.mp3").c_str());
        }
      }
      
    }
    int getExp = ((CCInteger*)info->objectForKey("exp"))->getValue();
    CCArray* fixed = _map->getFixedEnemies(preExp, preExp + getExp);
    if (fixed->count() > 0) {
      _enemyManager->pushEnemiesQueue(fixed);
    }
    this->checkLevelUp();
  } else if (performType == SkillPerformTypeNone) {
    // 何も実行しなかったとき
    // MP回復 コマンド化したのでコメントアウトしておきます
    //_characterManager->addMP(1);
  }
  
  _controller->updateSkills(_characterManager);
  this->updateFocus();
  _currentSkillInfo.skillTrackName = "";
  _currentSkillInfo.type = SkillPerformTypeNone;
  _currentSkillInfo.skill = NULL;
  
  // ターンカウントを進める
  ++_turnCount;
  ++_mapTurnCount;
  // このターンにテンション使ってないときreset
  if (_characterManager->getLastSkill() != NULL && strcmp(_characterManager->getLastSkill()->getIdentifier(), "tension")) {
    _characterManager->resetTension();
  }
  if (!_characterManager->isPerforming()) {
    _controller->resetAllTriggers();
    _enemyManager->purgeAllTrash();
  }
}

void MainScene::updateGUI() {
  _statusLayer->setCurrentHP(_characterManager->getHP());
  _statusLayer->setMaxHP(_characterManager->getMaxHP());
  _statusLayer->setCurrentMP(_characterManager->getMP());
  _statusLayer->setMaxMP(_characterManager->getMaxMP());
  _statusLayer->setLevel(_characterManager->getLevel());
}

bool MainScene::checkLevelUp() {
  int currentLevel = _characterManager->getLevel();
  if (currentLevel != _preLevel) { // レベルが上がったとき
    _musicManager->setIntroCount(0);
    _preLevel = currentLevel;
    _map->performOnLevel(currentLevel, _characterManager, _enemyManager); // スクリプトを呼んでやる
    _characterManager->updateParameters();
    CocosDenshion::SimpleAudioEngine::sharedEngine()->playEffect(FileUtils::getFilePath("SE/levelup.mp3").c_str());
    _level = _map->createLevel(currentLevel);
    
    _enemyManager->setLevel(_level);
    _enemyManager->removeAllEnemiesQueue();
    this->updateGUI();
    _isLevelUped = true;
    return true;
  }
  return false;
}

void MainScene::onGameOver() {
  CocosDenshion::SimpleAudioEngine::sharedEngine()->playEffect(FileUtils::getFilePath("Music/general/gameover.mp3").c_str());
  _ground->stop();
  _state = VCStateGameOver;
  GameOverLayer* gameover = new GameOverLayer(this);
  this->addChild(gameover);
  gameover->autorelease();
  _musicManager->getMusic()->pause();
  _controller->setVisible(false);
}

void MainScene::removeNode(CCNode* node) {
  this->removeChild(node, true);
}

void MainScene::updateFocus() {
  Enemy* nearest = _enemyManager->getNearestEnemy();
  if (nearest) {
    _focus->setVisible(true);
    _focus->setPosition(ccpAdd(nearest->getPosition(), ccp(0, nearest->getContentSize().height * nearest->getCurrentScale(nearest->getRow()) * 0.8)));
    _focus->setScale(nearest->getCurrentScale(nearest->getRow()));
  } else {
    _focus->setVisible(false);
  }
}

void MainScene::addDamageEffect() {
  // 被ダメージに応じてラベルなど表示
  bool isDead = false;
  bool isShield = false;
  int sumDamage = 0;
  std::queue<DamageInfo>* queue = _characterManager->getDamageInfoQueue();
  while (!queue->empty()) { // キューが空になるまで取り出す
    DamageInfo info = queue->front();
    queue->pop();
    int damage = info.damage;
    DamageType damageType = info.damageType;
    // 被ダメージ表示しちゃう
    CCLabelAtlas* damageLabel = CCLabelAtlas::create(boost::lexical_cast<string>(damage).c_str(),
                                                     FileUtils::getFilePath("Image/damage_number.png").c_str(), 50, 100, '0');
    CCDirector* director = CCDirector::sharedDirector();
    damageLabel->setPosition(ccp(director->getWinSize().width / 2, 90));
    this->addChild(damageLabel);
    damageLabel->setScale(0);
    damageLabel->runAction(CCSequence::create(CCScaleTo::create(0.1, 0.8),
                                              CCDelayTime::create(0.5),
                                              CCScaleTo::create(0.2, 0.0),
                                              CCCallFuncN::create(damageLabel, callfuncN_selector(MainScene::removeNode)),
                                              NULL));
    sumDamage += damage;
    if (damageType == DamageTypeDeath) {
      isDead = true;
    } else if (damageType == DamageTypeShield) {
      isShield = true;
      break;
    }
  }
  // 総ダメージに応じて画面を揺らしてやる
  
  if (sumDamage > 0) {
    // 画面点滅させて音を鳴らす
    CocosDenshion::SimpleAudioEngine::sharedEngine()->playEffect(FileUtils::getFilePath("SE/damage.mp3").c_str());
    BlinkLayer* bLayer = new BlinkLayer(ccc4(255, 0, 0, 255));
    bLayer->autorelease();
    this->addChild(bLayer);
    // ついでに画面もゆらしちゃう
    const float FPS = 60.0;
    const int shakeRange = 15;
    CCArray* actions = CCArray::create();
    for (int i = 0; i < FPS / 2; ++i) {
      CCMoveTo* move = CCMoveTo::create(1.0 / FPS, ccp(sumDamage * (-shakeRange / 2 + rand() % shakeRange), sumDamage * (-shakeRange / 2 + rand() % shakeRange)));
      actions->addObject(move);
    }
    CCMoveTo* reset = CCMoveTo::create(0, ccp(0, 0));
    actions->addObject(reset);
    this->runAction(CCSequence::create(actions));
  }
  if (isDead) { // 死んだとき
    this->onGameOver();
  } else if (isShield) { // 盾装備してたとき
    CocosDenshion::SimpleAudioEngine::sharedEngine()->playEffect(FileUtils::getFilePath("SE/guard.mp3").c_str());
  }
}

void MainScene::changeMap(Map* nextMap) {
  _map->release();
  nextMap->retain();
  _map = nextMap;
  _level = nextMap->createInitialLevel(); // レベルを生成する
  _enemyManager->setLevel(_level); // レベルをセット
  _enemyManager->removeAllEnemiesQueue(); // キューを初期化
  _mapTurnCount = 0; // マップカウント0に戻す
  _state = VCStateIntro;
  _musicManager->setMusicSet(_map->getCurrentMusic(_level)); // 音楽セットを切り替える
  
  _musicManager->setIntroCount(0);
  _musicManager->setFinishCount(0);
  _controller->setEnable(false);
  _musicManager->pushIntroTracks();
  this->updateGUI();
}

void MainScene::startBossBattle() {
  _controller->setEnable(false);
  _state = VCStateIntro; // イントロに移行
  _musicManager->setMusicSet(_map->getCurrentMusic(_level)); // 音楽セットを切り替える
  _controller->setEnable(false);
  _musicManager->pushIntroTracks();
}

void MainScene::gotoNextStage() {
  // マップセレクターは後で実装します
  CCArray* maps = _map->getNextMaps();
  this->changeMap((Map*)maps->lastObject()); // マップを強制的に切り替える
}

void MainScene::onFinishTracksCompleted() {
  
  if (_map->isBossStage() && _level->getLevel() == _map->getMaxLevel() + 1) { // ボスステージで、現在が最高レベル+1の時
    // おそらくボス撃破後なので、ボス戦を終了させます
    _enemyManager->removeEnemy(_enemyManager->getBoss());
    _enemyManager->setBoss(NULL);
    //_characterManager->setLevel(_characterManager->getLevel() + 1);
    _state = VCStateMain;
    this->gotoNextStage();
  } else if (_map->isBossStage() && _level->getLevel() == _map->getMaxLevel()) { // ボスステージで、現在が最高レベルの時
    // ボス戦を開始します
    this->startBossBattle();
  } else if (_level->getLevel() == _map->getMaxLevel() + 1 && _map->getNextMaps()->count() > 0) { // 最高レベルの次の時で、次のマップが存在するとき
    // 次のステージに移動します
    this->gotoNextStage();
  }
  
}

void MainScene::setPause(bool pause) {
  CCScheduler* scheduler = CCDirector::sharedDirector()->getScheduler();
  if (pause && _pausedTargets == NULL) {
    PauseLayer* layer = new PauseLayer(this);
    layer->autorelease();
    _pausedTargets = scheduler->pauseAllTargets();
    _pausedTargets->retain();
    _musicManager->getMusic()->pause();
    this->addChild(layer, 1000, PAUSE_LAYER_TAG);
    CocosDenshion::SimpleAudioEngine::sharedEngine()->playEffect(FileUtils::getFilePath("SE/pause.mp3").c_str());
  } else {
    _musicManager->getMusic()->play();
    scheduler->resumeTargets(_pausedTargets);
    _pausedTargets = NULL;
    this->removeChildByTag(PAUSE_LAYER_TAG, true);
    CocosDenshion::SimpleAudioEngine::sharedEngine()->playEffect(FileUtils::getFilePath("SE/cancel.mp3").c_str());
  }
}

VCState MainScene::getState () {
  return _state;
}