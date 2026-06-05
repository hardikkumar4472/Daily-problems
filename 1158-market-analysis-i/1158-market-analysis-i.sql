# Write your MySQL query statement below
select user_id  buyer_id ,join_date,count(order_date)orders_in_2019 
from users
left join Orders
on user_id=buyer_id
and year(order_date)=2019
group by 1,2