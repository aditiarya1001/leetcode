SELECT sub.email
FROM (
  SELECT email, COUNT(email) AS email_count
  FROM Person
  GROUP BY email
) AS sub
WHERE sub.email_count > 1;
