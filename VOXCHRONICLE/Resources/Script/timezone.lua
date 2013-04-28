function getCurrentTimeZone()
  local time = VQTime:sharedTime()
  local hour = time:getCurrentHour()
  if 6 <= hour and hour < 16 then -- 朝
    return 0
  elseif 16 <= hour and hour < 19 then -- 夕方
    return 1
  end
  return 2 -- 夜
end
