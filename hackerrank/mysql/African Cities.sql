SELECT a.name FROM CITY a
JOIN COUNTRY b ON a.countrycode = b.code
WHERE b.continent = 'Africa'