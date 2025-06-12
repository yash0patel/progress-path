/* Employee details input system: Collects and stores details of 5 employees. */

#include <iostream>
#include <string.h>
using namespace std;

class Employee
{
public:
    int id;
    char name[30];
    double salary;
    char dsgn[200];
    char orgname[200];
};

int main()
{
    Employee e[5];
    int num;
    cout << "Enter following employees details\n"
         << endl;

    for (int i = 0; i < 5; i++)
    {

        cout << "for " << i + 1 << " employees" << endl;
        cout << "Employee ID : ";
        cin >> e[i].id;
        cout << "Name : ";
        fflush(stdin);
        gets(e[i].name);
        cout << "Salary : ";
        cin >> e[i].salary;
        cout << "dsgn : ";
        fflush(stdin);
        gets(e[i].dsgn);
        cout << "Organization name : ";
        fflush(stdin);
        gets(e[i].orgname);
        cout << endl;
    }
    return 0;
}