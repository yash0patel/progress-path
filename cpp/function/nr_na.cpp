/* Simple calculator program to perform addition, subtraction, multiplication, and division */

#include <iostream>
using namespace std;
void add()
{
    int a, b;
    cout << "Enter two integer : \n";
    cin >> a >> b;
    cout << a << " + " << b << " = " << a + b;
}
void sub()
{
    int a, b;
    cout << "Enter two integer : \n";
    cin >> a >> b;
    cout << a << " - " << b << " = " << a - b;
}
void multy()
{
    int a, b;
    cout << "Enter two integer : \n";
    cin >> a >> b;
    cout << a << " x " << b << " = " << a * b;
}
void div()
{
    int a, b;
    cout << "Enter two integer : \n";
    cin >> a >> b;
    cout << a << " / " << b << " = " << a / b;
}
int main()
{
    int ch;

    while (1)
    {
        cout << "\n1> addition \n2> sub \n3>multy \n4>div \n5> exit" << endl;
        cout << "Enter your choice : ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            add();
            break;

        case 2:
            sub();
            break;

        case 3:
            multy();
            break;

        case 4:
            div();
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