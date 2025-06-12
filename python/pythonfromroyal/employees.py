# 1. Write a Python class Employee with attributes like emp_id, emp_name, emp_salary, and emp_department and methods like calculate_emp_salary, emp_assign_department, and print_employee_details.
# Sample Employee Data:
# "ADAMS", "E7876", 50000, "ACCOUNTING"
# "JONES", "E7499", 45000, "RESEARCH"
# "MARTIN", "E7900", 50000, "SALES"
# "SMITH", "E7698", 55000, "OPERATIONS"
# Use 'assign_department' method to change the department of an employee.
# Use 'print_employee_details' method to print the details of an employee.
# Use 'calculate_emp_salary' method takes two arguments: salary and hours_worked, which is the number of hours worked by the employee. If the number of hours worked is more than 50, the method computes overtime and adds it to the salary. Overtime is calculated as following formula:
# overtime = hours_worked - 50
# Overtime amount = (overtime * (salary / 50))

class Employee:
    def __init__(self,emp_name,emp_id,emp_salary,emp_department):
        self.emp_name = {}
        self.emp_name.update({emp_id:emp_name})
        self.emp_salary = {}
        self.emp_salary.update({emp_id:emp_salary})
        self.emp_department = {}
        self.emp_department.update({emp_id:emp_department})


    def calculate_emp_salary(self,hours_worked,emp_id):
        if(emp_id in self.emp_name.keys()):
            if(hours_worked-50 > 0):
                self.emp_salary[emp_id] = ((hours_worked - 50) * (self.emp_salary[emp_id] / 50)) + self.emp_salary[emp_id]
            # print(self.emp_salary[emp_id])
        else:
            return "invalide employees id pleas try again"

    def emp_assign_department(self,emp_id,new_department):
        if(emp_id in self.emp_name.keys()):
            self.emp_department[emp_id] = new_department
            # print(self.emp_department)
        else:
            return "invalide employees id pleas try again"

    def print_employee_details(self,emp_id):
        if(emp_id in self.emp_name.keys()):
            # print("Name : ",self.emp_name[emp_id])
            # print("Id : ",emp_id)
            # print("Salary : ",self.emp_salary[emp_id])
            # print("Department : ",self.emp_department[emp_id])
            return {
                'Name' : self.emp_name[emp_id],
                'Id' : emp_id,
                'Salary' : self.emp_salary[emp_id],
                'Department' : self.emp_department[emp_id]
            }
        else:
            return "invalide employees id pleas try again"
emp = Employee("ADAMS", "E7876", 50000, "ACCOUNTING")
Employee("JONES", "E7499", 45000, "RESEARCH")
Employee("MARTIN", "E7900", 50000, "SALES")
Employee("SMITH", "E7698", 55000, "OPERATIONS")
# emp = Employee()
emp.emp_assign_department("E7876","XYZ")
emp.calculate_emp_salary(90,"E7876")
# emp.print_employee_details("E7876")
print(emp.print_employee_details("E7876"))