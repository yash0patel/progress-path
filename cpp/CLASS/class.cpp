#include <iostream>
#include <string.h>
using namespace std;

class employees
{
    int id;
    char name[30];
    int salary;
    int department_id;
    int i=100;
public: 
    employees(char name[],int salary,int d_id)
    {
        strcpy(this->name,name);
        this->salary=salary;
        department_id=d_id;
        id = i+1;
    }
    ~employees()
    {
        cout<<"all data copy";
        cout<<"\nname = "<<name;
        cout<<"\nid = "<<id;
        cout<<"\ndepartment_id = "<<department_id;
        cout<<"\nsalary = "<<salary;
    }
};
int main()
{
    employees e1("xyz",125,5);
    return 0;
}
