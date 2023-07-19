# # Write your MySQL query statement below
# by subquery
# select max(salary) as SecondHighestSalary
# from employee where salary < (select max(salary) from employee );

#  by limit
# SELECT
#     IFNULL(
#       (SELECT DISTINCT Salary
#        FROM Employee
#        ORDER BY Salary DESC
#         LIMIT 1 OFFSET 1),
#     NULL) AS SecondHighestSalary

# by correalted subquery

select ifnull(max(salary),null) as secondhighestsalary
from employee
where salary < (select max(salary) from employee)