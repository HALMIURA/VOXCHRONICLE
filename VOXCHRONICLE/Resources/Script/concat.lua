function concat(...)
  local args = { ... }
  local result = {}
  for i, t in ipairs(args) do
    for j, elem in ipairs(t) do
      table.insert(result, elem)
    end
  end
  return result
end
