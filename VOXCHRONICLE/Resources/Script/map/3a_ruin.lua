Map = {
  name = "古代遺跡",
  wayMusic = "ttn1",
  bossMusic = "3Bb",
  backgroundImage = "ruin_background.png",
  skin = "skinC",
  ending = "",
  nextMaps = {""},
  initialLevel = 21,
  maxLevel = 30,
  getEnemyTable = function(level)
    if level <= 2 then
       if level <= 22 then
            return {mask3A2 = 3, wisp3A0 = 1 ,gargoyle3A0 = 1}
        elseif level <= 23 then
            return {typhoon3A3 = 3,gargoyle3A0 = 1}
        elseif level <= 25 then
            return {mask3A3 = 2, wisp3A3 = 1, typhoon3A3 = 1}
        elseif level <= 27 then
            return {mask3A6 = 1, typhoon3A3 = 1}
        else
            return { wisp3A3 = 2, typhoon3A3 = 1,gargoyle3A0 = 1}
        end
    return {mask3A0 = 3, typhoon3A0 = 2,wisp3A0 = 2 ,gargoyle3A0 = 1}
    end
  end,
  getEnemyPopRate = function(level)
    if level <= 22 then
    return 0.3
    elseif level <= 23 then
    return 0.2
    else
    return 0.3
    end
    return 0.6
  end,
  fixedEnemies = {
  }
}
