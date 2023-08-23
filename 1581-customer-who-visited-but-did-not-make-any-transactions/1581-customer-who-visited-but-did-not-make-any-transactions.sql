# Write your MySQL query statement below
SELECT DISTINCT customer_id, count(customer_id) as count_no_trans
FROM Visits
WHERE visit_id NOT IN (Select visit_id FROM transactions)
GROUP By customer_id;