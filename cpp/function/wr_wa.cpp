// A simple calculator program with functions for addition, subtraction, multiplication, and division.

#include <iostream>
using namespace std;
int add(int a,int b)
{
    return a + b;
}
int sub(int a,int b)
{
    return a - b;
}
int multy(int a,int b)
{
    return a * b;
}
int dive(int a,int b)
{
    return a / b;
}

int main()
{
    int a, b, ch;

    while (1)
    {
        cout << "\n\nEnter two integer : \n";
        cin >> a >> b;
        cout << "\n1> addition \n2> sub \n3>multy \n4>div \n5> exit" << endl;
        cout << "Enter your choice : ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            cout << a << " + " << b << " = " << add(a,b);
            break;

        case 2:
            cout << a << " - " << b << " = " <<sub(a,b);
            break;

        case 3:
            cout << a << " * " << b << " = " <<multy(a,b);
            break;

        case 4:
            cout << a << " / " << b << " = " <<dive(a,b);
            break;

        case 5:
            return 0;
            break;

        default:
            cout << "Invalide choice";
            break;
        }
    }
    return 0;
}