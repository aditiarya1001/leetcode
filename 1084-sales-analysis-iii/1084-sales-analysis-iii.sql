SELECT A.product_id, A.product_name
FROM Product A INNER JOIN Sales B ON A.product_id = B.product_id
GROUP BY A.product_id
HAVING MIN(B.sale_date) >= '2019-01-01' AND MAX(B.sale_date) <= "2019-03-31"
