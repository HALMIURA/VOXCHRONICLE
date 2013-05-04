-- のろい
EnemySkill = {
  name = "やみのいなずまがぼくをせめる",
  performSkill = function(self, user, characterManager, enemyManager)
    SimpleAudioEngine:sharedEngine():playEffect("enemy_burn.mp3")

    local layer = EffectLayer:sharedLayer()

    local mManager = MessageManager:sharedManager()
    local key = "skill_last"
    local turn = user:getRegister(key,0)
    if turn == 0 then
      -- 溜め初回ターンの時
      user:setAnimationClip("attack", 1, true) -- グラを変更する
      mManager:pushMessage(user:getName().."は　やみのまほうを　となえている")
      --(user:getName().."はなにかを　くりだして　きそうだ")
      --(user:getName().."が　あやしい　うごきをしている")
      --(user:getName().."が　なにか　しかけてくる！？")
      user:setRegister(key, turn + 1)
      user:setRegister("skillType", 0)
      user:setRow(2)
    elseif turn >= 2 then
      layer:addEffectOnEnemy(nil, "thunder", 6, CCRectMake(0, 0, 120, 80)):setColor(ccc3(230, 0, 138))
      if not characterManager:getShield()  then
      characterManager:addMP(-2)
      end
      characterManager:damage(10)
      user:setDefaultAnimationClip() -- グラを元に戻す
      mManager:pushMessage("やみのいなずまが　"..characterManager:getCurrentCharacter():getName().."を　つらぬく！")
      --あかい　らいげきが　（キャラ）　を　うちぬく！
      --（ラスボス名）の　ダークサンダー！！
      --やみの　でんきだ！　ビリビリビリっ！！
      user:setRegister(key, 0)
      user:setRow(1)
    else
      user:setRegister(key, turn + 1)
    end
  end
}
return EnemySkill
