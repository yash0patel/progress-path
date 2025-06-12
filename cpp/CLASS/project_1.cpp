/* Program to store and display student details, including marks, and search by roll number or name. */

#include <iostream>
#include <string.h>
using namespace std;
int size = 2;

class student
{
private:
    int rno;
    char name[30];
    int std;
    char SchoolName[200];
    int maths;
    int che;
    int phy;
    int sum[5];
    float avg[5];

public:
    void scan();
    void disp();
    void show(char ch[30], int rno);
};
student s[5];

void student ::scan()
{
    for (int i = 0; i < size; i++)
    {
        cout << "\nEnter details for student - " << i + 1 << endl;
        cout << "Enter roll-number : ";
        cin >> s[i].rno;
        cout << "Enter name : ";
        fflush(stdin);
        cin >> s[i].name;
        cout << "Enter std : ";
        cin >> s[i].std;
        cout << "Enter school name : ";
        fflush(stdin);
        gets(s[i].SchoolName);
        cout << "Enter subject marks for student - " << i + 1 << endl;
        cout << "maths : ";
        cin >> s[i].maths;
        cout << "che : ";
        cin >> s[i].che;
        cout << "phy : ";
        cin >> s[i].phy;
        s[i].sum[i] = s[i].maths + s[i].che + s[i].phy;
        s[i].avg[i] = s[i].sum[i] / 3.0;
    }
}

void student ::disp()
{
    // cout << "\nRoll.no\t\tName\t\tStander\t\tschool name" << endl;
    cout << "\nRoll.no\t\tName\t\tStander\t\tschool name\t\t\tmarks of student " << endl;
    cout << "       \t\t    \t\t       \t\t           \t\t\tmaths\tche\tphy\t\tsum\t\tavg" << endl
         << endl;

    for (int i = 0; i < size; i++)
    {
        cout << s[i].rno << "\t\t" << s[i].name << "\t\t" << s[i].std << "\t\t" << s[i].SchoolName << endl;
        cout << "       \t\t    \t\t       \t\t           \t\t\t" << s[i].maths << "\t" << s[i].che << "\t" << s[i].phy << "\t\t" << s[i].sum[i] << "\t\t" << s[i].avg[i] << endl
             << endl;
    }
}

void student ::show(char ch[30], int rno)
{
    for (int i = 0; i < size; i++)
    {
        if (strcmp(ch, s[i].name) == 0 || rno == s[i].rno)
        {
            cout << "\nRoll.no\t\tName\t\tStander\t\tschool name" << endl;
            cout << s[i].rno << "\t\t" << s[i].name << "\t\t" << s[i].std << "\t\t" << s[i].SchoolName << endl;
            cout << "\n-> marks of student " << i + 1 << endl;
            cout << "   \t\t\tmaths\tche\tphy\t\tsum\t\tavg" << endl;
            cout << "   \t\t\t" << s[i].maths << "\t" << s[i].che << "\t" << s[i].phy << "\t\t" << s[i].sum[i] << "\t\t" << s[i].avg[i] << endl;
        }
        else if (i == size - 1)
        {
            cout << "\nroll number/name not define try again\n"
                 << endl;
        }
    }
}

void choice()
{
    int ch, rno;
    char name[30];

    student s;

    while (1)
    {
        rno = 0;
        strcpy(name, "");
        cout << "Enter 1> for show student details as per roll number" << endl;
        cout << "      2> for show student details as per name" << endl;
        cout << "      0> for exit" << endl;
        cout << "Enter your choice : ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            cout << "Enter student roll number : ";
            cin >> rno;
            s.show(name, rno);
            break;

        case 2:
            cout << "Enter student Name : ";
            cin >> name;
            s.show(name, rno);
            break;

        case 0:
            exit(0);
            break;

        default:
            cout << "Invalid choice try again\n"
                 << endl;
            break;
        }
    }
}

int main()
{
    student s;
    s.scan();
    s.disp();
    choice();
    return 0;
}
