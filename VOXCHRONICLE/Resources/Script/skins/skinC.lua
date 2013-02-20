Skin = {
  name = "SkinC",
  prefix = "cave",
  hasBackground = false,
  groundFrameCount = 4,
  buildSkin = function(self)
    -- ここでスキンの定義をｇｄｇｄ書きます
    local hpLabel = CCSprite:create("cave_hp.png")
    hpLabel:setPosition(ccp(20, 308));
    self:addChild(hpLabel)
    
    local mpLabel = CCSprite:create("cave_mp.png");
    mpLabel:setPosition(ccp(282, 308))
    self:addChild(mpLabel)
  
    local currentHPLabel = CCLabelAtlas:create("0", "cave_hp_numbers.png", 10, 15, string.byte("0"))
    currentHPLabel:setScale(0.6)
    currentHPLabel:setPosition(ccp(169, 308))
    currentHPLabel:setAnchorPoint(ccp(0.5, 0.5))
  
    local maxHPLabel = CCLabelAtlas:create("0", "cave_hp_numbers.png", 10, 15, string.byte("0"))
    maxHPLabel:setScale(0.4)
    maxHPLabel:setPosition(ccp(205, 305))
    maxHPLabel:setAnchorPoint(ccp(0.5, 0.5))
    self:addChild(currentHPLabel, 0, CurrentHPLabelTag)
    self:addChild(maxHPLabel, 0, MaxHPLabelTag)
  
    local slash = CCSprite:create("cave_slash.png")
    slash:setPosition(ccp(191, 308))
    self:addChild(slash)
  
    -- レベル
    local levelBack = CCSprite:create("cave_level_back.png")
    levelBack:setPosition(ccp(240, 295))
    self:addChild(levelBack)
    
    local stageLabel = CCSprite:create("cave_level.png")
    stageLabel:setPosition(ccp(240, 282))
    self:addChild(stageLabel)
  
    local levelLabel = CCLabelAtlas:create("10", "cave_level_numbers.png", 12.8, 14.5, string.byte("0"))
    levelLabel:setPosition(ccp(222, 290))
    self:addChild(levelLabel, 0, LevelLabelTag)
  
    local lifeGaugeBackground = CCSprite:create("gauge_bg.png")
    lifeGaugeBackground:setAnchorPoint(ccp(0.0, 0.5))
    lifeGaugeBackground:setPosition(ccp(35, 307))
    self:addChild(lifeGaugeBackground, 0, LifeGaugeBackgroundTag)

    local lifeGauge = CCSprite:create("gauge.png")
    lifeGauge:setAnchorPoint(ccp(0.0, 0.5))
    lifeGauge:setPosition(ccp(35, 307))
    self:addChild(lifeGauge, 0, LifeGaugeTag)
    
  end
}

return Skin