SELECT
	CASE
    	WHEN g.grade<8 THEN NULL
    	ELSE s.name
    END as name,
    g.grade, s.marks
FROM Students s
JOIN Grades g
ON s.marks>=g.min_mark AND s.marks<=g.max_mark
ORDER BY g.grade DESC, name, s.marks