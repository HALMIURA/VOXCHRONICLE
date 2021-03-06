Map = {
  name = "遺跡",
  wayMusic = "ttn1",
  bossMusic = "Hawaii",
  backgroundImage = "ruin_background.png",
  thumbnailImage = "ruin_thumbnail.png",
  skin = "skinC",
  ending = "endingA",
  nextMaps = {},
  initialLevel = 21,
  maxLevel = 30,
  getEnemyTable = function(level)
    if level <= 22 then
      return {mimic3A1 = 2, mask3A1 = 5}
    elseif level <= 24 then
      return {wisp3A2 = 3, typhoon3A2 = 2}
    elseif level <= 26 then
      return {mimic3A1 = 2,mask3A1 = 6,gargoyle3A0 = 2}
    elseif level <= 28 then
      return {mask3A1 = 3, wisp3A2 = 3, typhoon3A2 = 1, mimic3A1 = 1}
    elseif level < 30 then
      return {mask3A1 = 3, typhoon3A2 = 3,gargoyle3A0 = 1}
    end
    return {}
  end,
  onLoad = function(self, characterManager, enemyManager)
    enemyManager:loadEnemyTextureAsync("mask.png")
    enemyManager:loadEnemyTextureAsync("wisp.png")
    enemyManager:loadEnemyTextureAsync("typhoon.png")
    enemyManager:loadEnemyTextureAsync("mimic.png")
    enemyManager:loadEnemyTextureAsync("gargoyle.png")
    SaveData:sharedData():setClearedForMap("fp_ruin")
  end,
  onBack = function(self, characterManager, enemyManager)
    local key = "fortressAchieve"
    local boss = enemyManager:getBoss()
    if boss then
      local bossRow = enemyManager:getBoss():getRow()
      self.__IRegister__:setRegister(key,bossRow)
    end
  end,
  onLevelUp = function(self, characterManager, enemyManager)
    local level = characterManager:getLevel()
    if level == 29 then
      enemyManager:loadEnemyTextureAsync("fortress.png")
    elseif level == 30 then
      CCTextureCache:sharedTextureCache():removeTextureForKey("mask.png")
      CCTextureCache:sharedTextureCache():removeTextureForKey("wisp.png")
      CCTextureCache:sharedTextureCache():removeTextureForKey("typhoon.png")
      CCTextureCache:sharedTextureCache():removeTextureForKey("gargoyle.png")

      fortress = enemyManager:popEnemyAt("fortress3A0", MAX_ROW - 1, 1)
      SaveData:sharedData():setClearedForMap("fp_ruin_boss")
      enemyManager:setBoss(fortress)
    end
  end,
  getEnemyPopRate = function(level)
    if level <= 24 then
      return 0.4
    elseif level <= 26 then
      return 0.3
    elseif level <= 28 then
      return 0.4
    else
      return 0.3
    end
    return 0.6
  end,
  onClear = function(self, characterManager, enemyManager)
    local data = SaveData:sharedData()
    local key = "fortressAchieve"
    local row = self.__IRegister__:getRegister(key,1)
    if row == 0 then
      data:unlockAchievement("nagoya")
    end
    data:setClearedForMap("ruin_boss") -- フリープレイ解放
  end,
  fixedEnemies = {
  }
}
