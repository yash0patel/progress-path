// 110.WAP TO Print Employee‟s ID, NAME and get value from user 
#include <iostream>
using namespace std;

struct stu
{
    int id;
    char name[10];
};

int main()
{
    struct stu s;
    
    cout << "Enter name and number: ";
    cin >> s.name >> s.id;
    
    cout << "\nId     Name\n";
    cout << "\n" << s.id << "      " << s.name << endl;

    return 0;
}
