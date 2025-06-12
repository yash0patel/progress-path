/* Employee management system: Stores and displays details of employees. */

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
    Employee e, e1, e2, e3, e4, e5;
    int num;
    cout << "Enter following employees details\n"
         << endl;

    for (int i = 0; i < 3; i++)
    {

        cout << "for 1 employees" << endl;
        
        cout << "Employee ID : ";
        cin >> e.id;
        
        cout << "Name : ";
        fflush(stdin);
        gets(e.name);
        
        cout << "Salary : ";
        cin >> e.salary;
        
        cout << "dsgn : ";
        fflush(stdin);
        gets(e.dsgn);
        
        cout << "Organization name : ";
        fflush(stdin);
        gets(e.orgname);
        cout << endl;
        
        if (i == 0)
        {
            e1 = e;
        }
        else if (i == 1)
        {
            e2 = e;
        }
        else if (i == 2)
        {
            e3 = e;
        }
        else if (i==3)
        {
            e4=e;
        }
        else if (i==4)
        {
            e5=e;
        }
    }
    while (1)
    {

        cout << "Enter num: ";
        cin >> num;
        switch (num)
        {
        case 1:
            cout << "\nfor 1 employees" << endl;
            cout << "Employee ID : " << e1.id << endl;
            cout << "Name : " << e1.name << endl;
            cout << "Salary : " << e1.salary << endl;
            cout << "dsgn : " << e1.dsgn << endl;
            cout << "Organization name : " << e1.orgname << endl;
            break;

        case 2:
            cout << "\nfor 2 employees" << endl;
            cout << "Employee ID : " << e2.id << endl;
            cout << "Name : " << e2.name << endl;
            cout << "Salary : " << e2.salary << endl;
            cout << "dsgn : " << e2.dsgn << endl;
            cout << "Organization name : " << e2.orgname << endl;
            break;

        case 3:
            cout << "\nfor 3 employees" << endl;
            cout << "Employee ID : " << e3.id << endl;
            cout << "Name : " << e3.name << endl;
            cout << "Salary : " << e3.salary << endl;
            cout << "dsgn : " << e3.dsgn << endl;
            cout << "Organization name : " << e3.orgname << endl;
            break;

        // case 4:
        //     cout << "\nfor 4 employees" << endl;
        //     cout << "Employee ID : " << e4.id << endl;
        //     cout << "Name : " << e4.name << endl;
        //     cout << "Salary : " << e4.salary << endl;
        //     cout << "dsgn : " << e4.dsgn << endl;
        //     cout << "Organization name : " << e4.orgname << endl;
        //     break;

        // case 5:
        //     cout << "\nfor 5 employees" << endl;
        //     cout << "Employee ID : " << e5.id << endl;
        //     cout << "Name : " << e5.name << endl;
        //     cout << "Salary : " << e5.salary << endl;
        //     cout << "dsgn : " << e5.dsgn << endl;
        //     cout << "Organization name : " << e5.orgname << endl;
        //     break;

        case 0:
            exit(0);
            break;
        default:
            cout<<"Invalid choice try again\n";
        }
    }
}