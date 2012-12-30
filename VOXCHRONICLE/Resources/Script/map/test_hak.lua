Map = {
  name = "スクリプトテスト",
  prefix = "dub",
  bossPrefix = "dub_boss",
  introCount = 2,
  backgroundImage = "",
  nextMaps = {"test"},
  initialLevel = 1,
  maxLevel = 10,
  getEnemyTable = function(level)
    if level <=3 then
      return {geek = 1, ginet = 1, slime = 3, leaf = 3, typhoon = 3}
    elseif level <= 7 then
      return {geek = 4, ginet = 6, tnt = 2, geek_shield = 1}
    else
      return {geek = 2, ginet = 6, tnt = 4, tetufez = 1, geek_shield = 1}
    end
    return {}
  end,
  getEnemyPopRate = function(level)
    if level <=5 then
      return 0.3
    end
    return 0.5
  end,
  fixedEnemies = {
    {"ginet", 100},
    {"tnt", 20},
    {"Level10",0}
  }
}