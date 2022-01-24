# Write your MySQL query statement below
select Person.firstname,person.lastname, Address.city,Address.state
From person left join Address On Person.personId=Address.personId;
