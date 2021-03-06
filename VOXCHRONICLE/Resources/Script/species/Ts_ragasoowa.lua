Enemy = {
  name = "ラガスーワ",
  imageName = "ragasoowa",
  attack = 0,
  baseExp = 0,
  hasFrame = false,
  counter = 0,
  getSpeed = function(enemy, characterManager)
    local row = enemy:getRow()
    if row < 2 then
      return 0
    end
    return 1
  end,
  getFrequency = function(enemy, characterManager)
    return 1
  end,
  disableSkills = {},
  description = [[
ダンジョンに君臨するモンスターの元締め。宝を守って空を飛び灼熱の炎を吐く。前作だとラスボスだった。
生息地：チュートリアル　攻撃力：つよい　移動：おそい
]],
  habitat = "",
  animationFrames = 5,
  width = 204,
  height = 163,
  performSkill = function(self)
  return ""
  end
}

return Enemy