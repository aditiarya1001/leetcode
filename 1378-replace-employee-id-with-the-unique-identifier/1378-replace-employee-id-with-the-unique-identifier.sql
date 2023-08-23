SELECT a.unique_id, b.name
FROM EmployeeUNI a
RIGHT JOIN Employees b
on a.id=b.id
WHERE unique_id IS NULL OR unique_id IS NOT NULL;
