math.randomseed(os.time())
Enemy = {
  name = "ワート・モショウ",
  imageName = "2last",
  attack = 20,
  baseExp = 1,
  hasFrame = true,
  counter = 0,
  width = 256,
  height = 170.75,
  getSpeed = function(enemy, characterManager)
    return 0
  end,
  getFrequency = function(enemy, characterManager)
    return 1
  end,
  disableSkills = {"knockback"},
  description = [[
この世界のあらゆる音やリズムをねじまげて、自分の音と同化させてしまう力を持つまでになったこの世界で最悪の魔物。
  ]],
  habitat = "",
  animationFrames = 4,
  performSkill = function(self, characterManager, enemyManager)
    math.random(100)
    local r = math.random(100)
    local tensionTurn = self:getRegister("tensionWave", 0)
    --local swordTurn = self:getRegister("", 0)
    if tensionTurn > 0 or r < characterManager:getTension() * 10 then
      return "reset_tension"
    elseif self:getItem() == EnemyItemNone and r < 15 then
      return "equip"
    end
    return ""
  end
}

return Enemy