Skill = {
  name = "ノックバック",
  identifier = "knockback",
  effectFrames = 3,
  mp = 0,
  se = true,
  tensionLevel = 0,
  common = false,
  cutinType = EffectLayerCutinTypeNormal,
  maxRepeat = 1,
  turn = 1,
  loop = true,
  performSkill = function(self, target, characterManager, enemyManager)
    row = target:getRow()
    local newRow = row + 4
    if newRow >= MAX_ROW then
      newRow = MAX_ROW - 1
    end
    target:setRow(newRow)
  end,
  getPower = function(characterManager)
    local tension = characterManager:getTension()
    t = {0, 2, 4, 8, 16}
    return t[tension + 1]
  end,
  skillRange = SkillRangeSingle,
  skillType = SkillTypePhysical,
  messages = {
    ""
  }
}
