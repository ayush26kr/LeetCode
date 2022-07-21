# Write your MySQL query statement below
select b.id
from Weather a,Weather b
where
a.recordDate=(b.recordDate-INTERVAL 1 DAY)
AND a.temperature<b.temperature;
