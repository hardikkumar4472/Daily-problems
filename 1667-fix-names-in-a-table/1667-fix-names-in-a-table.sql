/* Write your PL/SQL query statement below */
select user_id as USER_ID, upper(SUBSTR(name,1,1)) || lower(SUBSTR(name,2)) as NAME from Users order by user_id;