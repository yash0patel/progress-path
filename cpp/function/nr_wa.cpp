// Basic Calculator that performs addition, subtraction, multiplication, and division based on user input.
#include <iostream>
using namespace std;
void add(int a,int b)
{
    cout << a << " + " << b << " = " << a + b;
}
void sub(int a,int b)
{
    cout << a << " - " << b << " = " << a - b;
}
void multy(int a,int b)
{
    cout << a << " x " << b << " = " << a * b;
}
void dive(int a,int b)
{
    cout << a << " / " << b << " = " << a / b;
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
            add(a,b);
            break;

        case 2:
            sub(a,b);
            break;

        case 3:
            multy(a,b);
            break;

        case 4:
            dive(a,b);
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