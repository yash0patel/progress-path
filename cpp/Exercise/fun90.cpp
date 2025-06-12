// 90.Function to sum two numbers (w/o return type w/o arg. )

#include <iostream>
using namespace std;

void sum()
{
    int a, b;
    cout << "Enter two integer : ";
    cin >> a >> b;
    cout << a << " + " << b << " = " << a + b;
}

int main()
{
    sum();
    return 0;
}