// 95.Function to find power by passing values in function (example of (w/o return type – w argument)

#include <iostream>
using namespace std;

void power(int num, int pow)
{
    int ans = 1;
    for (int i = 0; i < pow; i++)
    {
        ans = ans * num;
    }
    cout << "power is " << ans;
}

int main()
{
    int num, pow;

    cout << "Enter a base number : ";
    cin >> num;
    cout << "Enter a power : ";
    cin >> pow;
    power(num, pow);
    return 0;
}