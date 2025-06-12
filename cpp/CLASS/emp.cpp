/* program to input and display employee details based on a specific salary condition */

#include <iostream>
#include <string.h>
using namespace std;

class employee
{
    int id;
    char name[30];
    int salary;
    int department_id;
    char orgname[40];
    int i = 1;

public:
    employee()
    {
        cout << "Enter following employees details: " << endl;
        cout << "id : ";
        cin >> id;
        cout << "Name : ";
        fflush(stdin);
        gets(name);
        cout << "Salary : ";
        cin >> salary;
        cout << "Department id : ";
        cin >> department_id;
        cout << "orgname : ";
        fflush(stdin);
        gets(orgname);
        cout << endl
             << endl;
    }

    void sal()
    {
        if (salary == 17000)
        {
            dis();
        }
    }

    void dis()
    {
        cout << "id : " << id << endl;

        cout << "Name : " << name << endl;

        cout << "Salary : " << salary << endl;

        cout << "Department id : " << department_id << endl;

        cout << "orgname : " << orgname << endl
             << endl;
    }
};

int main()
{
    employee e[5];
    for (int i = 0; i < 5; i++)
    {
        e[i].sal();
    }
}