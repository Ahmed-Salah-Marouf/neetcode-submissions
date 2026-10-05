SELECT name, 
    CASE
        WHEN SUM(distance) IS NULL THEN 0
        ELSE SUM(distance)
    END
    AS travelled_distance
FROM users
LEFT JOIN rides
ON (users.id = rides.user_id)
GROUP BY name
ORDER BY travelled_distance DESC;