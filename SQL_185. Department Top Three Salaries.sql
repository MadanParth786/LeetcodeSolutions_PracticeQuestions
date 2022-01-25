# Write your MySQL query statement below
Select dep.Name as Department, emp.Name as Employee, emp.Salary from Department dep, 
Employee emp where emp.departmentId=dep.id and (Select count(distinct Salary) From Employee where DepartmentId=dep.Id and Salary>emp.Salary)<3
