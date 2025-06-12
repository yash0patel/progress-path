// 93.Function to find Power (w/o return type w/o arg. )

#include <iostream>
using namespace std;

void power()
{
    int num,power,ans = 1;

    cout<<"Enter a base number : ";
    cin>>num;
    cout<<"Enter a power : ";
    cin>>power;
    for (int i = 0; i < power; i++)
    {
        ans = ans * num;
    }
    cout<<"power is "<<ans;
}

int main()
{
    power();
    return 0;
}