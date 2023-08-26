WITH cte AS
(
    SELECT
        id,
        email,
        ROW_NUMBER() OVER (PARTITION BY email ORDER BY id ASC) AS rown
    FROM person
)
DELETE FROM person
WHERE (email, id) IN (SELECT email, id FROM cte WHERE rown > 1);
