# Write your MySQL query statement below
SELECT Users.name, SUM(case when Users.id = Rides.user_id then distance else 0 end) as travelled_distance
FROM Users
LEFT JOIN Rides
ON Users.id = Rides.user_id
GROUP BY Users.id
ORDER BY travelled_distance DESC, name ASC