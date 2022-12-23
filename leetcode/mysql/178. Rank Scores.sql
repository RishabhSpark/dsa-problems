# Write your MySQL query statement below
SELECT Score, (SELECT COUNT(DISTINCT score) FROM Scores as s2 WHERE score>=s1.score) as "Rank"
FROM Scores as s1
ORDER BY Score desc