# Write your MySQL query statement below
SELECT query_name,
   round(avg(rating/position),2) as quality,
   round(100*sum(rating<3)/count(*),2) as poor_query_percentage
    FROM Queries
GROUP BY query_name;
