require("concat")
require("timezone")
return function(map, characterManager, enemyManager)
  local chara = characterManager:getCurrentCharacter():getName()
  local mapId = map:getIdentifier()
  local currentTimeZone = getCurrentTimeZone()
  --開始時メッセージ関係
  --ステージ開始時共通
  local commonPattern = {
    "さあ　てきだ！",
    "モンスターが　あらわれた",
    "モンスターだ　どうする？　こまんど▼",
    "まものが　あらわれた",
    "さあ　いくわよ！！",
    "まものの　においがする．．．",
    "てきがくるぞ　きをつけろ",
  }
  return concat(commonPattern, (function()
    --ステージ開始時1a
    if mapId == "1a_simple" then
      return {
        "コマンドを　タッチして　たたかおう！",
        "さあ！　たたかいの　はじまりだ",
        "ぼうけんが　いま　はじまる",
        "しゅつじん",
        "ぼうけんの　たびに　しゅっぱつ",
        "けんをとれ　たたかいが　はじまるぞ",
      }
    end

    --ステージ開始時1b昼
    if mapId == "1b_field" and currentTimeZone == 0 then
      return {
        "さあ！　たたかいの　はじまりだ",
        "ぼうけんが　いま　はじまる",
        "しゅつじん",
        "ぼうけんの　たびに　しゅっぱつ",
        "けんをとれ　たたかいが　はじまるぞ",
        "",
        "",
        "",
        "",
        "さいしょからクライマックスだぜ！",
      }
    end

    --ステージ開始時2a
    if mapId == "2a_forest" then
      return {
        "ここは．．．しんりんね",
        "もりに　とうちゃくしたようだ",
        "しんりんの　たたかいが　はじまる",
        "このもりの　なは　ガメイラ",
      }
    end

    --ステージ開始時2b
    if mapId == "2b_cave" then
      return {
        "すっかり　さびれてしまっている",
        "",
        "",
        "あかりが　ついてて　よかった",
        "",
      }
    end

    --ステージ開始時2c
    if mapId == "2c_cyber" then
      return {
        "ここは　どこなの．．．！？",
        "――電脳世界　ファミル――",
        "ふしぎな　くうかんだな",
        "なんだ　このくうかんは．．．？",
        "READY",
        "001010010101101010",
        "なつかしい　かおりがする",
        "レトロ　ね．．．",
      }
    end
    --ステージ開始時3a
    if mapId == "3a_ruin" then
      return {
        "",
        "グランエターナは　このさきに...?",
        "",
        "",
        "",
      }
    end

    --ステージ開始時3b
    if mapId == "3b_castle" then
      return {
        "",
        "",
        "",
        "",
        "",
      }
    end

    --ステージ開始時3c
    if mapId == "3c_ocean" then
      return {
        "",
        "",
        "",
        "",
        "しゅうちゅうしゅうちゅう　だいじょうぶだいじょうぶ",
      }
    end

    --ステージ開始時3d
    if mapId == "3d_space" then
      return {
        "ここは惑星外宙域　Ｓ－Ｂ－α",
        "しょあくの　こんげんが　ここに．．．？",
        "オクス　はっしん！！",
        "ここは　うちゅう．．．",
        "ラスカ　おまえはいったい―――！？",
      }
    end

    --ステージ開始時1b夕
    if mapId == "1b_field" and currentTimeZone == 1 then
      return {
        "さあ！　たたかいの　はじまりだ",
        "ぼうけんが　いま　はじまる",
        "しゅつじん",
        "ぼうけんの　たびに　しゅっぱつ",
        "けんをとれ　たたかいが　はじまるぞ",
        "ゆうやけって　いいわよね",
        "ゆうやけか　さびしくなるな",
        "",
        "",
        "",
      }
    end

    --ステージ開始時1b夜
    if mapId == "1b_field" and currentTimeZone == 2 then
      return {
        "さあ！　たたかいの　はじまりだ",
        "ぼうけんが　いま　はじまる",
        "しゅつじん",
        "ぼうけんの　たびに　しゅっぱつ",
        "けんをとれ　たたかいが　はじまるぞ",
        "よるから　しゅっぱつするとは",
        "もう　よるか",
        "ちょっとねむいけど　がんばりましょう",
        "",
        "",
      }
    end
  end
  )())
end
