Map = {
  name = "Lesson2",
  wayMusic = "chabo",
  bossMusic = "",
  backgroundImage = "tutorial_background.png",
  skin = "skinA",
  ending = "",
  nextMaps = {},
  initialLevel = 11,
  maxLevel = 21,
  getEnemyTable = function(level)
    return {}
  end,
   onBack = function(self, characterManager, enemyManager)
    math.random(100)
    local layer = EffectLayer:sharedLayer()
    local preHP = self.__IRegister__:getRegister("preHP", characterManager:getHP())  
    local level = characterManager:getLevel()
    local enemies = enemyManager:getEnemies()
    local enemyCount = 0
    if not (enemies == nil) then
      enemyCount = enemies:count()
    end
    if level == 11 then
      -- ラスカにチェンジしないと先には進めない
      if characterManager:getCurrentCharacter():getName() == "ラスカ" then
      	-- ラスカにチェンジ済なので、敵が1体もいなくなったらモンスター生成
      	if enemyCount == 0 then
          enemyManager:popEnemyAt("T_slime30", 3, 1)
      	end
      end
    elseif level == 12 then
      -- 敵が1体もいなくなったらモンスター生成
      if enemyCount == 0 then
          enemyManager:popEnemyAt("T_moth7", 5, 0)
          enemyManager:popEnemyAt("T_moth7", 5, 1)
          enemyManager:popEnemyAt("T_moth7", 5, 2)
          enemyManager:popEnemyAt("T_moth7", 5, 3)
      end
     elseif level == 13 then
       local isAnnihilation = self.__IRegister__:getBool("isAnnihiration")
       if isAnnihilation and enemyCount == 0 then
         enemyManager:popEnemyAt("T_moth7", MAX_ROW - 1, enemyCount % 3) -- 全滅済みなら毎ターン雑魚を後ろに出す
       end
       -- 敵が1体もいなくなったらモンスター生成
       if enemyCount == 0 then
        if not isAnnihilation then
          -- 初回なのでフラグを立てて、撃破済みの時は撃破済みのモンスター生成を見るようにする
          self.__IRegister__:setBool("isAnnihiration", true)
          enemyManager:popEnemyAt("T_slime30", 5, 0)
        end
      end
    elseif level == 14 then
      local lastSkill = characterManager:getLastSkill()
      local usedCure = self.__IRegister__:getBool("usedCure")
      -- 回復スキルの使用判定を行う
      if lastSkill and lastSkill:getIdentifier() == "cure" then
        usedCure = true
        self.__IRegister__:setBool("usedCure", usedCure)
      end
      -- 敵が1体もいなくなったらモンスター生成
      if enemyCount == 0 then
         -- ちゃんと回復を使うまで近くにモンスターを出す
         if usedCure then
           enemyManager:popEnemyAt("T_moth7", 3, 1)
         else
           enemyManager:popEnemyAt("flame2C2", 1, 1)
         end
      end
	elseif level == 15 then
	  local lastSkill = characterManager:getLastSkill()
	  local changedVox = self.__IRegister__:getBool("changedVox")
	  local healedMp = self.__IRegister__:getBool("healedMp")
	  if not changedVox and characterManager:getCurrentCharacter():getName() == "オクス" then
	    -- 初回限定でオクスにチェンジしたらポップアップを表示する
	    self.__IRegister__:setBool("changedVox", true)
        local popup = layer:addPopupWindow(2)
        popup:setText(0, "らすかをだいじに", [[
オクス君が宝玉に力を込めてくれれば、私のMPは回復するわ。さっきの回復コマンドをオクス君にチェンジしてからタッチしてみてね。
]])
        popup:setText(1, "回復し合おう！HPはラスカ、MPはオクス", [[
オクス君はMP回復、私はHP回復、って補い合う感じになってるから上手くチェンジして回復していってね！　ん？よく考えると私たち、もしかして永久機関！？
]])
      end
      -- オクスが回復スキル使ったら敵を出すようにフラグを立てる
      if lastSkill and lastSkill:getIdentifier() == "charge" then
        healedMp = true
        self.__IRegister__:setBool("healedMp", healedMp)
      end
      -- 回復スキル使用フラグが立っていて敵がいなかったら敵を出す
      if enemyCount == 0 and healedMp then
        enemyManager:popEnemyAt("T_moth7", 3, 0)
        enemyManager:popEnemyAt("T_moth7", 3, 1)
        enemyManager:popEnemyAt("T_moth7", 3, 2)
      end
    elseif level == 16 or level == 17 then
      -- 敵が1体もいなくなったらモンスター生成
      if enemyCount == 0 then
          enemyManager:popEnemyAt("slime3B1", 5, 0)
          enemyManager:popEnemyAt("wisp3A2", 5, 1)
      end
    elseif level == 18 or level == 19 then
      -- 敵が1体もいなくなったらモンスター生成
      if enemyCount == 0 then
          enemyManager:popEnemyAt("cryst3C4", MAX_ROW - 1, 0)
          enemyManager:popEnemyAt("naut3C5", MAX_ROW - 1, 1)
      end
    elseif level == 20 then
      -- 敵がいなかったら敵を出す
      if enemyCount == 0 then
        enemyManager:popEnemyAt("cryst3C4", MAX_ROW - 1, 0)
        enemyManager:popEnemyAt("naut3C5", MAX_ROW - 1, 1)
        enemyManager:popEnemyAt("flame2C2", 5, 1)
        enemyManager:popEnemyAt("T_moth7", 3, 2)
      end
    end
  end,
  onLevelUp = function(self, characterManager, enemyManager)
    self.__IRegister__:clearRegister()
    local level = characterManager:getLevel()
    local layer = EffectLayer:sharedLayer()
    if level == 11 then
      local popup = layer:addPopupWindow(2)
      popup:setText(0, "ラスカに『チェンジ』！", [[
さぁ！私、ラスカが大活躍のレッスン２よ！
そろそろオクス君もつかれたでしょうから、
『チェンジ』マークにタッチして
私に交代してちょうだい。

音楽もかわって気分一新よ！]])
      popup:setText(1, "ラスカに『チェンジ』！", [[
オクス君は剣士だけど、私、ラスカは魔法使い
私は魔法をつかって攻撃するわ。

オクスの時と操作はかわらないから
いろいろ試してみてね！
]])
    elseif level == 12 then
      local popup = layer:addPopupWindow(3)
      popup:setText(0, "魔力（MP）に注意！", [[
まず注意事項として、私、ラスカの行動（ワザ）
では、魔力（MP）を消費しちゃうものがあるの。

これから説明する『ラスカサンダー』と
『ＨＰヒーリング』を使うときはＭＰを
使うから、のこり魔力（ＭＰ）には注意してね！
]])
      popup:setText(1, "奥義！『ラスカサンダー』！", [[
さて、モンスターの軍団が攻めてくるわ！
そんな時は『ラスカサンダー』！雷のマークよ。

これは『オクススラッシュ』と同じように
『パワー』をためないと使えないけど
モンスターをまとめてこうげきできる強力なワザよ！
]])
      popup:setText(2, "奥義！『ラスカサンダー』！", [[
でもね。『ラスカサンダー』は『オクススラッシュ』とは
違って、モンスター全体を攻撃できるけど
魔力（ＭＰ）を２ポイント使っちゃうの。

今は自動で魔力を回復するから
どんどん使ってみよう！
]])
	elseif level == 13 then
      local popup = layer:addPopupWindow(1)
      popup:setText(0, "弓で『スナイプ』！", [[
オクス君は『ノックバック』が使えるけど、かわりに
私、ラスカは 弓 での『スナイプ』が使えるわ。

『スナイプ』だと、今いる中で一番HPの高い
モンスターにいきなり攻撃できるの！
ＭＰも消費しないし、ここぞって時に使ってね！
]])
       -- FIXME MP不足で詰んでしまうので暫定的にMPを全回復
       characterManager:addMP(characterManager:getMaxMP())
	elseif level == 14 then
      local popup = layer:addPopupWindow(2)
      popup:setText(0, "いのちをだいじに", [[
きゃあ！！いつの間にか体力（ＨＰ）がピンチに！
モンスターも少ないしこの辺でＨＰの回復をしましょ？

ハートのマークをタッチすれば『ＨＰヒーリング』。
癒しの魔法でHPが回復するわ。
ＭＰを１つ使うけど、こまめな回復が大切よ。

]])
      popup:setText(1, "いのちをだいじに", [[
そうそう、忘れられがちだけど
『パワーチャージ』でためた『パワー』は
『ＨＰヒーリング』や『スナイプ』などの
ワザにも有効よ！
]])
	elseif level == 15 then
      local popup = layer:addPopupWindow(1)
      popup:setText(0, "MP足りなくってピンチだよ！", [[
ちょっと、オクス君！私に任せてばっかりだと息切れしちゃうんだから。さっきみたいに私にMP注入してよ～！いったんチェンジチェンジ！
]])
	elseif level == 16 then
      local popup = layer:addPopupWindow(3)
      popup:setText(0, "本格的な戦いへ！", [[
これで全ての操作は把握できたことだし、そろそろ連係プレイと行ってみようか、オクス君！チェンジを駆使して強敵を倒していこう！
]])
      popup:setText(1, "物理耐性と魔法耐性", [[
オクス君は剣で物理攻撃、私は杖で魔法攻撃をしてるんだけれど、中にはそれが効きにくいっていう耐性をもった敵がいるのよ。
]])
      popup:setText(2, "耐性はオーラで分かる！", [[
青いオーラが出てる敵はオクス君の剣が効きにくくって、赤いオーラが出てる敵は私の魔法が効きにくいわよ。敵との相性を気にして戦わないと、いつの間にかに追い詰められちゃうわ！敵のオーラをよーく観察してね！
]])
	elseif level == 18 then
      local popup = layer:addPopupWindow(2)
      popup:setText(0, "無効化アイテム：大盾と魔鏡", [[
耐性を持ってる敵もやっかいなんだけれど、もーっとやっかいなのが大盾と魔鏡っていう無効化のアイテムを持った敵！
]])
      popup:setText(1, "キャラチェンジで無効化を打ち破ろう！", [[
オクス君の剣を完璧に防いじゃう大盾と、私の魔法を完璧に防いじゃう魔鏡を装備してる敵もいるから、攻撃が通らないときはすぐキャラチェンジして対応してね。

大盾と魔鏡は、それぞれ通用する攻撃ができれば壊すことが出来るよ！シールドブレイク！
]])
	elseif level == 20 then
      local popup = layer:addPopupWindow(2)
      popup:setText(0, "ラスカちゃん編完了！", [[
だいたいキャラチェンジの話はこんな所ね～。オクス君は私がついてないとダメなんだから！　でも上手く力を合わせていければ恐い物なしなんだから一緒に頑張りましょ！そ、それに私も一人じゃ不安だからちゃんと助けてちょうだいね…！
]])
      popup:setText(1, "これにて免許皆伝！", [[
これでグランエターナを目指す準備は万端！まだちょっと不安だったらここで練習していってね。チュートリアルはポーズから抜けられるわよ！

あとは戦いのテクニック編もあるから、なんか変なモンスターとか見かけたら是非参考にしてみてね。
]])
    end
  end,
  getEnemyPopRate = function(level)
    return 0.7
  end,
  fixedEnemies = {
  }
}
