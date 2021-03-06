Map = {
  name = "電脳",
  wayMusic = "dhun",
  bossMusic = "",
  backgroundImage = "cyber_background.png",
  thumbnailImage = "cyber_thumbnail.png",
  skin = "skinA",
  ending = "",
  nextMaps = {"3c_ocean","3d_space"},
  initialLevel = 11,
  maxLevel = 20,
  getEnemyTable = function(level)
    if level <= 11 then
      return {heart2C2 = 1, egg2C1 = 1} 
    elseif level <= 12 then
      return {heart2C2 = 1, flame2C2 = 1, neko2C0 = 1}
    elseif level <= 13 then
      return {flame2C2 = 3, neko2C0 = 3, coin2C2 = 1}
    elseif level <= 14 then
      return {neko2C0 = 1, egg2C1 = 1, kani2C1 = 1}
    elseif level <= 15 then
      return {heart2C2, flame2C2 = 2, egg2C1 = 2, kani2C1 = 2, pak2C0 = 1}
    elseif level <= 16 then
      return {heart2C2 = 7, egg2C1 = 7, pak2C0 = 1, nisok2C0 = 1}
    elseif level <= 17 then
      return {heart2C2 = 7, flame2C2 = 7, pak2C0 = 1, nisok2C0 = 1}
    elseif level <= 18 then
      return {egg2C1 = 7, kani2C1 = 7, pak2C0 = 1, nisok2C0 = 1}
    elseif level <= 19 then
      return {egg2C1 = 9, pak2C0 = 3, nisok2C0 = 1}
    elseif level <= 20 then
      return {pak2C0 = 2, nisok2C0 = 5}
    else
      return {heart2C2 = 1, flame2C2 = 1, neko2C0 = 1, coin2C2 = 1, egg2C1 = 1, kani2C1 = 1, pak2C0 = 1, nisok2C0 = 1}
    end
  end,
    onLoad = function(self, characterManager, enemyManager)
    enemyManager:loadEnemyTextureAsync("hornet.png")
    enemyManager:loadEnemyTextureAsync("flame.png")
    enemyManager:loadEnemyTextureAsync("neko.png")
    enemyManager:loadEnemyTextureAsync("coin.png")
    enemyManager:loadEnemyTextureAsync("egg.png")
    enemyManager:loadEnemyTextureAsync("kani.png")
    enemyManager:loadEnemyTextureAsync("pak.png")    
    enemyManager:loadEnemyTextureAsync("nisok.png")
    SaveData:sharedData():setClearedForMap("fp_cyber")
  end,
  getEnemyPopRate = function(level)
    if level <=12 then
    return 0.6
    elseif level <=17 then
    return 0.55
    elseif level <=19 then
    return 0.55
    elseif level <=20 then
    return 0.3
    end
  end,
  onClear = function(self, characterManager, enemyManager)
    local data = SaveData:sharedData()
    data:unlockAchievement("clear2C")
  end,

  fixedEnemies = {
    --{"level10",0}
  }
}
