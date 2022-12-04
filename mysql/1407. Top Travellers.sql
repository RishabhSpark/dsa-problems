# Write your MySQL query statement below
SELECT u.name,
IFNULL(SUM(r.distance),0) as travelled_distance
FROM users as u LEFT JOIN rides as r
ON u.id=r.user_id
GROUP BY r.user_id
ORDER BY travelled_distance DESC, name ASC