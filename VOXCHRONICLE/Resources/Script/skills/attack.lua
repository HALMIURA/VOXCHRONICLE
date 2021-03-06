Skill = {
  name = "アタック",
  identifier = "attack",
  effectFrames = 4,
  mp = 0,
  se = false,
  tensionLevel = 0,
  common = false,
  canRepeat = true,
  cutinType = EffectLayerCutinTypeNormal,
  maxRepeat = 4,
  keepTension = false,
  turn = 1,
  loop = true,
  skillRange = SkillRangeSingle,
  skillType = SkillTypePhysical,
  performSkill = function(self, target, characterManager, enemyManager)
    local hit = true
    if target:getItem() == EnemyItemShield then
      hit = false
    elseif target:getType() == SkillTypePhysical then
      local power = self:getPower(characterManager)
      if target:getHP() > math.ceil(power / 2.0) then
        hit = false
      end
    end
    
    if hit then
      local basename = "attack_effect"
      local number = characterManager:getRepeatCount()
      local ext = ".mp3"
      local filename = basename..number..ext
      SimpleAudioEngine:sharedEngine():playEffect(filename)
    end
  end,
  getMessageTable = function(self, targets, map, characterManager, enemyManager)
    if targets and targets:count() > 0 then
      local target = targets:objectAtIndex(0)
      tolua.cast(target, "Enemy")
      if target:getSpecies():getIdentifier() == "wave" then --波用メッセージ
      return{
      "おおうなばらには　まるでこうかがない",
      "けんは　むなしく　あらなみに　のみこまれた",
      "きったところで　いみがなかった",
      "なみには　こうかが　ないようだ",
      "あらなにみは　けんげきは　つうじない",
      "なみに　けんをふるっても　いみないわ！",
      "こうかが　なかった",
      }
      elseif target:getType() == SkillTypePhysical or target:getItem() == EnemyItemShield or not target:getSpecies():isEnableSkill(self) then -- 効かない相手にはメッセージ表示しない
        return {}
      end
    end
    return {
      "おもいきり　けんをふりおろした",
      "けんで　こうげきした",
      "オクスの　けんが　てきをきる",
      "オクスの　こうげき！",
      "けんげき！！",
      "ソードで　ズババッ！！",
      "ザシュ！！",
      "ズバン！！",
      "ソードアタック！",
      "まっぷたつに　してやるぜ",
      "ぶったぎるぜ！",
      "けんを　ふりおろす！",
      "けんの　さびに　してやるぜ",
      "やっつけてやる！",
      "こうげきだぁぁー！",
      "また　きってしまった",
      "こよいの　けんは　ちにうえている",
      "にくをきり　ほねをたつ",
      "でんかの　ほうとう",
      "きります！　きります！",
      "SLASH!!",
      "きりまくり！",
      "くらえー！！",
      "くらぇい！",
      "いあいぎり！",
      "やめられない　とまらない",
      "コシのある　いちげき",
      "しゅぎょうの　せいかだ",
      "スパーーン",
      "しんくうはだ！",
      "かぜをきるほどの　けんげき",
    }
  end,
  getPower = function(characterManager)
    local repeatCount = characterManager:getRepeatCount()
    repeatPower = {0,1,2,3}
    local tension = characterManager:getTension()
    t = {3, 9, 12, 15, 30}
    return t[tension + 1] +repeatPower[repeatCount + 1]
  end
}

return Skill
