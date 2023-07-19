# # Write your MySQL query statement below
# by subquery
# select max(salary) as SecondHighestSalary
# from employee where salary < (select max(salary) from employee );

#  by limit
SELECT
    IFNULL(
      (SELECT DISTINCT Salary
       FROM Employee
       ORDER BY Salary DESC
        LIMIT 1 OFFSET 1),
    NULL) AS SecondHighestSalary

# by correalted subquery

# select salary as SecondHighestSalary from employee e1 where 2 =
# (select count(distinct e2.salary) from 
# employee e2 where e2.salary>=e1.salary);