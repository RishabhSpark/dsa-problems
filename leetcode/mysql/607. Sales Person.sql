# Write your MySQL query statement below
SELECT s.name
FROM Orders as o 
RIGHT JOIN Company as c
ON o.com_id = c.com_id
AND c.name='RED'
RIGHT JOIN SalesPerson as s
ON s.sales_id = o.sales_id
where o.sales_id IS NULL