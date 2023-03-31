SELECT CITY FROM STATION
WHERE LEFT(CITY, 1) = 'a' OR
	  LEFT(CITY, 1) = 'e' OR
      LEFT(CITY, 1) = 'i' OR
      LEFT(CITY, 1) = 'o' OR
      LEFT(CITY, 1) = 'u'