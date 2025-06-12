/* This program demonstrates a simple class in C++ with private data members, where data is set using a function and displayed using another function. */
#include <iostream>
#include <string.h>
using namespace std;

class student
{
    int rno;
    char name[50];
    int std;

public:
    student(int rno, char name[], int std)
    {
        cout << "\nSTART :: para Constructor";
        this->rno = rno;
        strcpy(this->name, name);
        this->std = std;
        cout << "\nEXIT :: para Constructor";
    }

    student(student &s)
    {
        cout << "\nSTART :: copy Constructor";
        this->rno = s.rno;
        strcpy(this->name, s.name);
        this->std = s.std;
        cout << "\nEXIT :: copy Constructor";
    }

    void disp()
    {
        cout << "\n"
             << rno << "\t" << name << "\t" << std;
    }
};

int main()
{
    student s1(1, "yash", 12);
    s1.disp();

    student s2(s1);

    s2.disp();
    return 0;
}