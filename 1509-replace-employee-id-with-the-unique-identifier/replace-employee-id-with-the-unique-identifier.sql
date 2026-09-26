# Write your MySQL query statement below

select eu.unique_id, e.name
from employees e
left join EmployeeUni eu
on eu.id = e.id;


