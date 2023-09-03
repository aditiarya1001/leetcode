# Write your MySQL query statement below
select p.product_name, sum(o.unit) as unit from products p LEFT JOIN Orders o
ON P.product_id = O.product_id
WHERE order_date LIKE '2020-02%'
group by o.product_id having unit>=100;