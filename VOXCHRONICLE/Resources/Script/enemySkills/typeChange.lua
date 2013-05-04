-- 耐性をこちらのキャラの状態で切り替える
EnemySkill = {
  name = "装備",
  performSkill = function(self, user, characterManager, enemyManager)
    local chara = characterManager:getCurrentCharacter():getCharacterType() -- 現在のキャラタイプを取得
    local mManager = MessageManager:sharedManager()
    local rand = math.random(10)
    local userName = user:getName()
    if not user:getType() == SkillTypeNormal and rand <= 2 then
      user:setSkillType(SkillTypeNormal) --耐性なし
      mManager:pushMessage(userName.."は　たいせいを　ととのえた")
    --user:getName()..は　ぼうぎょを　といた                 
    else
      if chara == CharacterTypeVox then -- 物理耐性
        user:setSkillType(SkillTypePhysical)
        mManager:pushMessage(userName.."は　まもりを　かためた")
        --user:getName()..は　ぼうぎょしょうへきを　てんかいした！
        --ぼうぎょ　しょうへき　ケロー！
      elseif chara == CharacterTypeLaska then -- 魔法耐性
        user:setSkillType(SkillTypeMagical)
        mManager:pushMessage(userName.."の　まわりを　見えない霧が　包み込む")
        --user:getName()..は　まほうしょうへきを　てんかいした！
        --user:getName()..の　まほうの　カベ！
        --user:getName()..は　まほうが　ききにくくなった！
        --まほう　しょうへき　ケローっ！
      end
    end
  end
}
return EnemySkill
