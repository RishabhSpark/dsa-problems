SELECT s.name
FROM Students s
RIGHT JOIN Packages p1 ON p1.id = s.id
RIGHT JOIN Friends f ON s.id = f.id
RIGHT JOIN Packages p2 ON p2.id = f.friend_id
WHERE p2.salary>p1.salary
ORDER BY p2.salary