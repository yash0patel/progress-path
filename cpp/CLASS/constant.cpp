#include <iostream>
#include <string.h>
using namespace std;

class student
{
    int rno;
    char name[50];
    int std;

public:
    void setData(const int rno,const char name[],const int std)
    {
        this->rno = rno;
        strcpy(this->name,name);
        this->std = std;
    }
    void disp()
    {
        cout << "\n" << rno << "\t" << name << "\t" << std;
    }
};

int main()
{
    student s;

    int rno;
    char name[50];
    int std;

    rno = 1;
    strcpy(name,"yash");
    std = 15;

    s.setData(rno,name,std);
    s.disp();

    return 0;
}