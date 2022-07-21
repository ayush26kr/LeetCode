# Write your MySQL query statement below
delete b
from Person a,Person b
where a.email=b.email
and a.id<b.id;
