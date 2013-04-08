Map = {
  name = "惑星外宙域S-B-α",
  wayMusic = "nmb",
  bossMusic = "AttaQ3-D",
  ending = "endingD",
  skin = "skinA",
  introCount = 0,
  backgroundImage = "3d_background0.png",
  thumbnailImage = "space_thumbnail.png",
  nextMaps = {},
  initialLevel = 21,
  maxLevel = 30,
  getEnemyTable = function(level)
    if level <= 22 then
      return {exob3D5 = 3, t2pha3D1 = 4}
    elseif level <= 24 then
      return {planet3D0 = 1, t2pha3D1 = 3}
    elseif level <= 25 then
      return {exob3D5 = 1, planet3D0 = 1, t2pha3D1 = 3}
    elseif level <= 29 then
      return {exob3D5 = 1, planet3D0 = 1, t2pha3D1 = 1}
    end
    return {}
      --return {exob3D5 = 3, planet3D0 = 1, t2pha3D1 = 1, whale3D7 = 1}
  end,
    onLoad = function(self, characterManager, enemyManager)
    enemyManager:loadEnemyTextureAsync("t2pha.png")
    enemyManager:loadEnemyTextureAsync("exob.png")
    enemyManager:loadEnemyTextureAsync("planet.png")
    enemyManager:loadEnemyTextureAsync("fortress.png")
    enemyManager:loadEnemyTextureAsync("knight.png")
    
    enemyManager:loadEnemyTextureAsync("kraken_body.png")
    enemyManager:loadEnemyTextureAsync("R_strfoot.png")
    enemyManager:loadEnemyTextureAsync("R_plfoot.png")
    enemyManager:loadEnemyTextureAsync("R_plclaw.png")
    enemyManager:loadEnemyTextureAsync("R_strclaw.png")
    enemyManager:loadEnemyTextureAsync("L_strfoot.png")
    enemyManager:loadEnemyTextureAsync("L_plfoot.png")
    enemyManager:loadEnemyTextureAsync("L_plclaw.png")
    enemyManager:loadEnemyTextureAsync("L_strclaw.png")
  end,
  onLevelUp = function(self, characterManager, enemyManager)
    local level = characterManager:getLevel()
    if level == 26 then
      enemyManager:popEnemyAt("fortress3D0", 7, 0)
      enemyManager:popEnemyAt("fortress3D0", 6, 1)
      enemyManager:popEnemyAt("fortress3D0", 7, 2)
    elseif level == 27 then
      enemyManager:popEnemyAt("fortress3D0", 7, 1)
      enemyManager:popEnemyAt("knight3D1", 7, 0)
      enemyManager:popEnemyAt("knight3D2", 7, 2)
    elseif level == 28 then
      enemyManager:popEnemyAt("kraken3D0", 7, 0)
    end
  end,
  onClear = function(self, characterManager, enemyManager)
    local data = SaveData:sharedData()
    data:unlockAchievement("clear3D")
  end,
  getEnemyPopRate = function(level)
    if level >= 26 and level <= 28 then
    return 0
    end
    return 0.3
  end
}

