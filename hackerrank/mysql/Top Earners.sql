SELECT MAX(salary*months) as totalearnings, COUNT(*) FROM Employee
GROUP BY (salary*months)
ORDER BY totalearnings
DESC LIMIT 1