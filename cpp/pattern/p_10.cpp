// Displaying the first 99 prime numbers and counting them.

#include <iostream>
using namespace std;

int main()
{
    int num = 2, l, p_num[30], count = 0, a = 0;

   for (int i = 0; i < 99; i++)
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
            cout<<num<<"  ";
            a++;
        }
        num++;
    }

cout<<"\n total prime number = "<<a;
return 0;
}