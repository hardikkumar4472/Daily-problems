# Write your MySQL query statement below
select max(num) as num from (select NUM from MyNumbers group by num having count(num)=1) as single_numbers;