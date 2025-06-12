/* This program defines a class `Employee` with private data members and provides functions to input and display employee details such as id, name, salary, designation, and organization name. */

#include <iostream>
#include <string.h>
using namespace std;

class Employee{
    private: 
        int id;
        char name[50];
        int salary;
        char dsgn[200];
        char orgname[200];

    public:

        void scanData()
        {
            cout<<"Enter following details for employees"<<endl;
            cout<<"id : ";
            cin>>id;
            cout<<"name : ";
            fflush(stdin);
            gets(name);
            cout<<"Salary : ";
            cin>>salary;
            cout<<"dsgn : ";
            fflush(stdin);
            gets(dsgn);
            cout<<"orgname : ";
            fflush(stdin);
            gets(orgname);
        }

        void dispData()
        {
            cout<<"\nid : "<<id<<endl;
            cout<<"name : "<<name<<endl;
            cout<<"Salary : "<<salary<<endl;
            cout<<"dsgn : "<<dsgn<<endl;
            cout<<"orgname : "<<orgname<<endl;
        }
};

int main()
{
    Employee e;

    e.scanData();
    e.dispData();

    return 0;
}