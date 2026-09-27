SELECT employee_id, salary AS bonus
FROM employees
WHERE employee_id % 2 = 1 AND name NOT like 'M%'

UNION 

SELECT employee_id, salary * 0
FROM employees
WHERE NOT(employee_id % 2 = 1 AND name NOT like 'M%')

ORDER BY employee_id;
