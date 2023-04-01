(SELECT CONCAT(Name, '(', LEFT(occupation,1), ')') as name
FROM OCCUPATIONS
ORDER BY name)
UNION
(SELECT CONCAT("There are a total of ", COUNT(occupation), " ", LOWER(occupation), "s.") as num FROM OCCUPATIONS
GROUP BY occupation
ORDER BY COUNT(occupation), occupation)
ORDER BY name