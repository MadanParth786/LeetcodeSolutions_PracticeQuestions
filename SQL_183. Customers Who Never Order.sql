# Write your MySQL query statement below
select name as Customers From Customers left join Orders on
Customers.id= Orders.customerId WHERE Orders.customerId IS NULL;

