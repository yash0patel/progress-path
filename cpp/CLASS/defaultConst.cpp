/* This program demonstrates the use of a default constructor in C++ which initializes the data members of the `student` class. */
#include <iostream>
#include <string.h>
using namespace std;

class student
{
    int rno;
    char name[50];
    int std;

public:
   student()
   {
    cout<<"\nSTART :: Default Constructor";
    rno=1;
    strcpy(name,"yash");
    std=12;
    cout<<"\nEXIT :: Default Constructor";
   }
    void disp()
    {
        cout << "\n" << rno << "\t" << name << "\t" << std;
    }
};

int main()
{
    student s;
    s.disp();
}