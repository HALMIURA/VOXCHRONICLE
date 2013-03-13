Enemy = {
  name = "クラーケンの足",
  imageName = "clawfoot",
  attack = 1,
  baseExp = 3,
  hasFrame = true,
  counter = 2,
  getSpeed = function(enemy, characterManager)
    return 0
  end,
  getFrequency = function(enemy, characterManager)
    return 1
  end,
  disableSkills = {"knockback"},
  animationFrames = 4,
  performSkill = function(self)
    local key = "footTurn"
    local turn = self:getRegister(key, 0) -- 溜めているターンを取得
    math.random(100)
    local rand = math.random(100)
    if turn > 0 or rand <= 10 then -- 溜めてる最中、または10%の確率で
      return "foot"
    end
    return ""
  end
}

return Enemy