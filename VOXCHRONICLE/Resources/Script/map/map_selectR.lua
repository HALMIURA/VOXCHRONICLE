Map = {
  name = "マップセレクトテスト面L",
  wayMusic = "nmb",
  bossMusic = "",
  ending = "",
  backgroundImage = "",
  skin = "skinC",
  nextMaps = {},
  initialLevel = 10,
  maxLevel = 99,
  getEnemyTable = function(level)
    return {leaf02 = 3, acorn02 = 2, flower02 = 2, doku01 = 1}
  end,
  onLevelUp = function(self, characterManager, enemyManager)
    local level = characterManager:getLevel()
  end,
  getEnemyPopRate = function(level)
    return 1.0
  end,
  fixedEnemies = {
  }
}
