// 91.Function to find Factorial (w/o return type w/o arg. )

#include <iostream>
using namespace std;

void factorial()
{
    int num, fact = 1;

    cout << "Enter a number : ";
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    if (num == 0)
    {
        fact = 0;
    }
    
    cout << "Factorial is " << fact;
}

int main()
{
    factorial();
    return 0;
}