# Write your MySQL query statement below
# SELECT p.product_id, p.product_name
# FROM Product as  p
# WHERE product_id NOT IN (SELECT p.product_id
# FROM Product as p JOIN Sales as s ON p.product_id = s.product_id
# WHERE s.sale_date<'2019-01-01' OR s.sale_date>'2019-03-31')
SELECT product_id, product_name
FROM product
JOIN SALES
USING(product_id)
GROUP BY product_id
HAVING sum(CASE WHEN sale_date between '2019-01-01' and '2019-03-31' THEN 1 ELSE 0 end) > 0
AND sum(CASE WHEN sale_date between '2019-01-01' and '2019-03-31' THEN 0 else 1 end) = 0