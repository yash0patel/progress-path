/* Program to input and display student details including name, roll number, and standard. */

#include <iostream>
using namespace std;

class student
{
public:
    int rno;
    char name[10];
    int std;
};

int main()
{
    student s[5];

    for (int i = 0; i < 3; i++)
    {
        cout<<"\nEnter details for student - "<<i<<endl;
        cout << "Enter name : ";
        cin >> s[i].name;
        cout << "Enter roll-number : ";
        cin >> s[i].rno;
        cout << "Enter std :";
        cin >> s[i].std;

    }

        cout << "\nName \t\t\troll-no. \t\tstd\n";
    
    for (int j = 0; j < 3; j++)
    {
        cout<<s[j].name<<"\t\t\t"<<s[j].rno<<"\t\t\t"<<s[j].std<<endl;
    }
    
    return 0;
}
