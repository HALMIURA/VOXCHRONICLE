Enemy = {
  name = "ツテフェズ",
  imageName = "tetufez",
  attack = 1,
  baseExp = 1,
  hasFrame = false,
  counter = 1,
  getSpeed = function(enemy, characterManager)
    return 1
  end,
  getFrequency = function(enemy, characterManager)
    return 2
  end,
  disableSkills = {},
  description = [[
魔物か人工魔法生物か諸説あるがわかっていない。
叩くといい音がする。
生息地：チュートリアル　攻撃力：ふつう　移動：ふつう
  ]],
  habitat = "",
  animationFrames = 4,
  performSkill = function(self)
  return ""
  end
}

return Enemy