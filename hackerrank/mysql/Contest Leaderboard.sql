SELECT h.hacker_id, h.name, SUM(s.score) as total FROM 
Hackers h INNER JOIN
	(SELECT hacker_id, MAX(score) as "score" FROM Submissions 
	 GROUP BY hacker_id, challenge_id) s
     ON h.hacker_id = s.hacker_id
GROUP BY h.hacker_id, h.name
HAVING total>0
ORDER BY total DESC, hacker_id ASC