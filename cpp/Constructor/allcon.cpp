/* C++ program to input and display student details such as name, roll number, standard, and marks in three subjects */

#include <iostream>
#include <string.h>
using namespace std;

class student
{
    char name[15];
    int std;
    int rollno;
    int marks[3];

public:
    student()
    {
        cout << "Enter student details : " << endl;
        cout << "Name : ";
        fflush(stdin);
        gets(name);
        cout << "std : ";
        cin >> std;
        cout << "roll number : ";
        cin >> rollno;
        cout << "Enter following subject marks for roll number " << rollno << endl;
        cout << "maths : ";
        cin >> marks[0];
        cout << "phy : ";
        cin >> marks[1];
        cout << "chy : ";
        cin >> marks[2];
    }

    student(student &s, int rollno)
    {
        strcpy(this->name, s.name);
        this->rollno = rollno;
        this->std = s.std;
        for (int i = 0; i < 3; i++)
        {
            this->marks[i] = s.marks[i];
        }
    }

    ~student()
    {
        cout << "Exit";
    }

    void dis()
    {
        cout << "Name : " << name << endl;
        cout << "std : " << std << endl;
        cout << "roll number : " << rollno << endl;
        cout << "subject marks for roll number " << rollno << endl;
        cout << "maths : " << marks[0] << endl;
        cout << "phy : " << marks[1] << endl;
        cout << "chy : " << marks[2] << endl
             << endl;
    }
};

int main()
{
    student s1, s2;
    student s0(s1, 12);

    cout << "student details for s0 " << endl;
    s0.dis();
    cout << "student details for s1" << endl;
    s1.dis();
    cout << "student details for s2 " << endl;
    s2.dis();
}