(SELECT CITY, LENGTH(CITY) as len FROM STATION
ORDER BY len ASC, CITY ASC
LIMIT 1)
UNION
(SELECT CITY, LENGTH(CITY) as len FROM STATION
ORDER BY len DESC, CITY ASC
LIMIT 1)