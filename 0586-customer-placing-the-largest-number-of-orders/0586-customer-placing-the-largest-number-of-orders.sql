# Write your MySQL query statement below
WITH OrderCounts AS (
    SELECT
        customer_number,
        COUNT(order_number) AS order_count
    FROM orders
    GROUP BY customer_number
)
SELECT customer_number
FROM OrderCounts
WHERE order_count = (SELECT MAX(order_count) FROM OrderCounts);

