/* C++ program to input and display employee details using inline functions and pointer arithmetic */

#include <iostream>
using namespace std;

class employee
{
private:
    int id;
    char name[30];
    int salary;
    int department_id;

public:
    inline void scandata();
    inline void dispdata();
};
inline void employee ::scandata()
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
}
inline void employee ::dispdata()
{
    cout << "\n"
         << id << "\t" << name << "\t" << salary << "\t" << department_id;
}
int main()
{
    employee e[3], *eptr;
    eptr = &e[0];
    for (int i = 0; i < 3; i++)
    {
        eptr->scandata();
        eptr = eptr + i;
    }
    eptr = &e[0];
    for (int i = 0; i < 3; i++)
    {
        eptr->dispdata();
        eptr = eptr + i;
    }
}