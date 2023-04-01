SELECT w.id, wp.age, coins_needed, w.power
FROM Wands w
JOIN Wands_Property wp
ON w.code = wp.code
WHERE wp.is_evil = 0 AND
coins_needed = (SELECT MIN(wd.coins_needed) FROM Wands wd WHERE wd.code = w.code AND wd.power = w.power)
ORDER BY w.power DESC, wp.age DESC