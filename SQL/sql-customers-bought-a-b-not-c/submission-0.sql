(SELECT customers.customer_id, customer_name
FROM customers
INNER JOIN orders
ON (customers.customer_id = orders.customer_id)
WHERE product_name = 'A'

INTERSECT 

SELECT customers.customer_id, customer_name
FROM customers
INNER JOIN orders
ON (customers.customer_id = orders.customer_id)
WHERE product_name = 'B'
)
EXCEPT

SELECT customers.customer_id, customer_name
FROM customers
INNER JOIN orders
ON (customers.customer_id = orders.customer_id)
WHERE product_name = 'C'

ORDER BY customer_name;
