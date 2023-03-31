SET @r1=0, @r2=0, @r3=0, @r4=0;
SELECT MIN(Doctor), MIN(Professor), MIN(Singer), MIN(Actor)
FROM(
    SELECT
        CASE WHEN Occupation = "Doctor" THEN (@r1:=@r1+1)
        	 WHEN Occupation = "Professor" THEN (@r2:=@r2+1)
        	 WHEN Occupation = "Singer" THEN (@r3:=@r3+1)
        	 WHEN Occupation = "Actor" THEN(@r4:=@r4+1) END as rownumber,

        CASE WHEN Occupation='Doctor' THEN Name END as Doctor,
        CASE WHEN Occupation='Professor' THEN Name END as Professor,
        CASE WHEN Occupation='Singer' THEN Name END as Singer,
        CASE WHEN Occupation='Actor' THEN Name END as Actor
    FROM OCCUPATIONS
    ORDER BY NAME) temp
GROUP BY rownumber;