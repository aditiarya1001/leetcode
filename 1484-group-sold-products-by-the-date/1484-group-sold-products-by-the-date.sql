# Write your MySQL query statement below
SELECT sell_date, COUNT(product) AS num_sold, GROUP_CONCAT(product ORDER BY product) AS products
FROM (
    SELECT DISTINCT sell_date, product
    FROM activities
) AS temp_activities
GROUP BY sell_date;