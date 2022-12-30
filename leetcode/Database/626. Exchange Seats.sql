# Write your MySQL query statement below
SELECT s1.id, s2.student FROM seat as s1, seat as s2
WHERE ((s1.id%2=0) AND (s1.id-s2.id=1))
OR ((s1.id%2=1) AND (s2.id-s1.id=1))
OR s1.id=(SELECT MAX(id) FROM seat) AND s2.id=(SELECT MAX(id) FROM seat) AND s1.id%2=1
ORDER BY s1.id