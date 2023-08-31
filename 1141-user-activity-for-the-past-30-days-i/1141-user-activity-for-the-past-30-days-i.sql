# Write your MySQL query statement below
# select activity_date as day, count(distinct(user_id)) as active_users from activity 
# where activity_date between '2019-06-27' and '2019-07-28'
# group by activity_date;

SELECT activity_date as day, COUNT(DISTINCT(user_id)) AS active_users
FROM Activity
WHERE activity_date BETWEEN '2019-06-28' AND '2019-07-27'
GROUP BY activity_date;