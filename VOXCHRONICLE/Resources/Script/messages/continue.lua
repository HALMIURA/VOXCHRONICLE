return function(map, characterManager, enemyManager)
  local chara = characterManager:getCurrentCharacter():getName()
  --コンティニュ―後にゲームが再開した時
--コンティニュ―時（全ステージ共通部分）
return {
    "さあ　もういちど！",
    "こんどこそ　こえてやる",
    "こんどこそ　まけないぞ",
    "いやな　ゆめをみたんだ",
    "どうしたら　クリアできるかな",
    "さっきのは　なかったことに",
    "はいぼくなんて　なかった",
    "もういちど　やってみよう",
    "たたかいかたを　かえてみるか",
    "こんどこそ　まけない",
  }
--各ステージ部分
--1a
return {
    "てきを　どんどん　こうげきしよう",
    "パワーチャージを　つかってみよう",
    "チュートリアルも　みてみてね",
    "けんのマークを　れんだしよう",
  }
--1b昼
return {
    "",
    "",
    "",
    "",
    "",
  }
--2a
return {
    "",
    "",
    "",
    "",
    "",
  }
--2b
return {
    "",
    "",
    "",
    "",
    "",
  }
--2c
return {
    "",
    "",
    "",
    "",
    "",
  }
--3a
return {
    "",
    "",
    "",
    "",
    "",
  }
--3b
return {
    "",
    "",
    "",
    "",
    "",
  }
--3c
return {
    "",
    "",
    "",
    "",
    "",
  }
--3d
return {
    "",
    "",
    "",
    "",
    "",
  }
--1b夕暮れ
return {
    "",
    "",
    "",
    "",
    "",
  }
--１ｂ夜
return {
    "",
    "",
    "",
    "",
    "",
  }
end