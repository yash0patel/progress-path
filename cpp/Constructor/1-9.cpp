// Program to demonstrate constructor overloading and copy constructor for employee class.

#include<iostream>
#include <string.h>
using namespace std;

class employee
{
    int id;
    char name[30];
    int salary;
    int department_id;

public:
    employee(employee &e)
    {
        this->id = e.id;
        strcpy(this->name , e.name);
        this->salary = e.salary;
        this->department_id = department_id;
    }

    employee()
    {
        cout<<"Enter following employees details: "<<endl;
        cout<<"id : ";
        cin>>id;
        cout<<"Name : ";
        fflush(stdin);
        gets(name);
        cout<<"Salary : ";
        cin>>salary;
        cout<<"Department id : ";
        cin>>department_id;
    }

    void disp()
    {
        cout<<"id : "<<id<<endl;
        
        cout<<"Name : "<<name<<endl;
        
        cout<<"Salary : "<<salary<<endl;
        
        cout<<"Department id : "<<department_id<<endl;
        
    }
};

int main()
{
    employee e;

    employee e1(e);

    e1.disp();
}