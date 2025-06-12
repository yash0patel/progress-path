/* C++ program to input and display student details using inline functions and pointer arithmetic */

#include <iostream>
using namespace std;

class student
{
private:
    int rno;
    char name[30];
    int std;
public:
    inline void scandata();
    inline void dispdata();
};
inline void student :: scandata()
{
    cout<<"Enter rno : ";
    cin>>rno;
    cout<<"Enter Name : ";
    fflush(stdin);
    gets(name);
    cout<<"Enter std : ";
    cin>>std;
}
inline void student :: dispdata()
{
    cout<<"\n"<<rno<<"\t"<<name<<"\t"<<std;   
}
int main()
{
    student s[5],*sptr;
    sptr = &s[0];
    for (int i = 0; i < 5; i++)
    {
        sptr->scandata();
        sptr = sptr + i;
    }

    sptr = &s[0];
    for (int i = 0; i < 5; i++)
    {
        sptr->dispdata();
        sptr = sptr + i;
    }        
}