# Write your MySQL query statement below
SELECT Customers.name as Customers
FROM Customers
LEFT JOIN Orders ON Orders.customerid = Customers.id
WHERE Orders.customerid IS NULL