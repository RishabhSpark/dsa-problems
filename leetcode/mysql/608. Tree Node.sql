# Write your MySQL query statement below
SELECT id,
    (CASE
        WHEN p_id IS NULL
        THEN 'Root'
        WHEN id IN SELECT(p_id from tree)
        THEN 'Inner'
        ELSE 'leaf'
    END ) as type
FROM tree