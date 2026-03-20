select id,movie,c.description,rating from cinema c
 where mod(id,2) !=0
  and c.description not like 'boring'
  order by rating DESC;