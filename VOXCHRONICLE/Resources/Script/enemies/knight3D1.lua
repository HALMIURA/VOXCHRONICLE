Enemy = {
  species = "knight",
  level = 30,
  hp = 48,
  getExp = function(default)
      return 15
  end,
  attack = 10,
  item = EnemyItemNone,
  type = SkillTypeMagical,
}

return Enemy
