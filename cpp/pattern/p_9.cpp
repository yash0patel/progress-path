// Generating and displaying a pyramid pattern of prime numbers and then in reverse order.

#include <iostream>
using namespace std;

int main()
{
    int index = 0, i, j, k, num = 2, l, p_num[30], count = 0, a = 0;

    while (a < 25)
    {
        count = 0;
        for (l = 2; l < num; l++)
        {
            if (num % l == 0)
            {
                count++;
                break;
            }
        }
        if (count == 0)
        {
            p_num[a] = num;
            a++;
        }
        num++;
    }

    for (i = 0; i < 5; i++)
    {
        cout << i << "- ";
        for (k = 5 - i; k >= 0; k--)
        {
            cout << " ";
        }
        for (j = 0; j <= i; j++)
        {
            cout << p_num[index] << " ";
            index++;
        }
        cout << "\n";
    }

    num = 48;
    for (i = 4; i >= 0; i--)
    {
        cout << i << "-  ";
        for (k = 5 - i; k >= 0; k--)
        {
            cout << " ";
        }
        p_num[0] = 2;
        for (j = 0; j < i; j++)
        {
            cout << p_num[index] << " ";
            index++;
        }
        cout << "\n";
    }
    return 0;
}