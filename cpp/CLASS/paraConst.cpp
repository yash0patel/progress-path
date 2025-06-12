/* Student class with parameterized constructor to initialize student details and display them. */

#include <iostream>
#include <string.h>
using namespace std;

class student
{
    int rno;
    char name[50];
    int std;

public:
   student(int rno,char name[], int std)
   {
    cout<<"\nSTART :: para Constructor";
    this -> rno = rno;
    strcpy(this->name,name);
    this->std=std;
    cout<<"\nEXIT :: para Constructor";
   }
    void disp()
    {
        cout << "\n" << rno << "\t" << name << "\t" << std;
    }
};

int main()
{
    student s1(1,"yash",12),s2(2,"xyz",13),s3(3,"abc",14);
    s1.disp();
    s2.disp();
    s3.disp();
    return 0;
}