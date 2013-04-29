require("concat")
require("timezone")
return function(map, characterManager, enemyManager)
  local chara = characterManager:getCurrentCharacter():getName()
  local mapId = map:getIdentifier()
  local currentTimeZone = getCurrentTimeZone()
  --ステージクリア―時
  --クリア時（全ステージ共通部分）
  local commonPattern =  {
    "ステージ　クリアー！",
    "なんとか　てきを　しのいだ",
    "たたかいを　きりぬけた",
    "よし！　きりぬけたぞ！",
    "モンスターを　たおした",
  }
  return concat(commonPattern, (function()
    --各ステージ部分
    --1a
    if mapId == "1a_simple" then
      return {
        "らくしょう　らくしょう",
        "へへへ　どんなもんだい！",
        "荒野　クリアー！",
        "ここからが　しょうねんば！",
      }
    end

    --1b昼
    if mapId == "1b_field" and currentTimeZone == 0 then
      return {
        "ふぅ　なんとかなったぜ",
        "平原を　こえた",
        "平原　クリアー！",
        "きょうは　いいてんきだな",
      }
    end

    --2a
    if mapId == "2a_forest" then
      return {
        "もりを　ぬけた",
        "森林　クリアー",
        "どくきのこ　つよかったな",
        "もりを　ぬけるわよ！",
      }
    end

    --2b
    if mapId == "2b_cave" then
      return {
        "炭鉱の　でぐちについた",
        "炭鉱　クリアー",
        "くずれおちなくて　よかった",
        "炭鉱には　ジャズがにあう",
      }
    end

    --2c
    if mapId == "2c_cyber" then
      return {
        "電脳世界　クリアー",
        "電脳世界から　だっしゅつした",
        "すさまじい　たたかいだったぜ",
        "おそろしい　せかいだった",
      }
    end

    --1b夕暮れ
    if mapId == "1b_field" and currentTimeZone == 1 then
      return {
        "ゆうぐれを　こえて",
        "さいごのは　なんだったんだ",
        "かった！　おれたちはつよい！",
        "ぜんりょく　だしきったわね",
      }
    end

    --１ｂ夜
    if mapId == "1b_field" and currentTimeZone == 2 then
      return {
        "もうじき　よるがあけそうね",
        "平原　クリアー",
        "平原の　おわりがみえた",
        "さあ　たたかいはこれからだ",
      }
    end
  end
  )())
end
