Enemy = {
  name = "ラガスーワ",
  imageName = "ragasoowa",
  attack = 0,
  baseExp = 0,
  hasFrame = false,
  counter = 0,
  getSpeed = function(enemy, characterManager)
    return 1
  end,
  getFrequency = function(enemy, characterManager)
    return 1
  end,
  disableSkills = {},
  description = [[
ダンジョンに君臨するモンスターの元締め。宝を守って空を飛び灼熱の炎を吐く。
]],
  habitat = "",
  animationFrames = 5,
  performSkill = function(self)
  return ""
  end
}

return Enemy