SELECT 
    s.user_id,
    (
        SELECT 
            ROUND(NVL(SUM(CASE WHEN action = 'confirmed' THEN 1 ELSE 0 END) / NULLIF(COUNT(*), 0), 0), 2)
        FROM Confirmations c
        WHERE c.user_id = s.user_id
    ) AS confirmation_rate
FROM Signups s;