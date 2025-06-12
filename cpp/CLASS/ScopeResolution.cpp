/* Program to input and display details of 5 students including name, roll number, and standard. */

#include <iostream>
using namespace std;

class student
{
private:
    int rno;
    char name[10];
    int std;

public:
    void scan();
    void disp();
};
student s[5];
void student ::scan()
{
    for (int i = 0; i < 5; i++)
    {
        cout << "\nEnter details for student - " << i << endl;
        cout << "Enter name : ";
        cin >> s[i].name;
        cout << "Enter roll-number : ";
        cin >> s[i].rno;
        cout << "Enter std :";
        cin >> s[i].std;
    }
}

void student ::disp()
{
    cout << "\nName \t\t\troll-no. \t\tstd\n";

    for (int j = 0; j < 5; j++)
    {
        cout << s[j].name << "\t\t\t" << s[j].rno << "\t\t\t" << s[j].std << endl;
    }
}

int main()
{
    student s;
    s.scan();
    s.disp();
    return 0;
}
