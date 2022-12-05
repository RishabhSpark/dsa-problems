# Write your MySQL query statement below
SELECT p.product_id, p.product_name
FROM Product as p
WHERE product_id NOT IN (SELECT p.product_id
FROM Product as p JOIN Sales as s ON p.product_id = s.product_id
WHERE s.sale_date<'2019-01-01' OR s.sale_date>'2019-03-31')