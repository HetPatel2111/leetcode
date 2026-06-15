# Write your MySQL query statement below
select a.firstName , a.lastName , b.city , b.state from Person as a left join Address as b ON a.personId=b.personID;