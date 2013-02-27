Skill = {
  name = "スラッシュ",
  identifier = "slash",
  effectFrames = 6,
  mp = 0,
  se = true,
  tensionLevel = 1,
  common = false,
  maxRepeat = 1,
  turn = 1,
  loop = true,
  skillRange = SkillRangeFront,
  skillType = SkillTypePhysical,
  getPower = function(characterManager)
    local tension = characterManager:getTension()
    t = {0, 4, 6, 9, 12}
    return t[tension + 1]
  end,
  messages = {
    ""
  }
}
