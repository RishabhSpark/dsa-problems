SELECT h.hacker_id, h.name
FROM Hackers h
JOIN Submissions s ON s.hacker_id = h.hacker_id
JOIN Challenges c ON c.challenge_id = s.challenge_id
JOIN Difficulty d ON d.difficulty_level = c.difficulty_level
WHERE d.score = s.score
GROUP BY h.hacker_id, h.name
HAVING COUNT(s.challenge_id)>1
ORDER BY COUNT(s.challenge_id) DESC, hacker_id