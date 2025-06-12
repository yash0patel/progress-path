// A simple calculator program that performs addition, subtraction, multiplication, and division using functions.

#include <iostream>
using namespace std;
int add()
{
    int a, b;
    cout << "Enter two integer : \n";
    cin >> a >> b;
    return a + b;
}
int sub()
{
    int a, b;
    cout << "Enter two integer : \n";
    cin >> a >> b;
    return a - b;
}
int multy()
{
    int a, b;
    cout << "Enter two integer : \n";
    cin >> a >> b;
    return a * b;
}
int div()
{
    int a, b;
    cout << "Enter two integer : \n";
    cin >> a >> b;
    return a / b;
}
int main()
{
    int ch;

    while (1)
    {
        cout << "\n1\n> addition \n2> sub \n3>multy \n4>div \n5> exit" << endl;
        cout << "\nEnter your choice : ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            cout << "add = " <<add();
            break;

        case 2:
            cout << "sub = " <<sub();
            break;

        case 3:
            cout << "multy = " <<multy();
            break;

        case 4:
            cout << "div = " <<div();
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