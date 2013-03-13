Enemy = {
  name = "左足pl",
  imageName = "L_plfoot",
  attack = 1,
  baseExp = 6,
  hasFrame = true,
  counter = 2,
  getSpeed = function(enemy, characterManager)
    return 1
  end,
  getFrequency = function(enemy, characterManager)
    return 2
  end,
  disableSkills = {},
  disableSkills = {},
  animationFrames = 4,
  performSkill = function(self)
    return ""
  end
}

return Enemy