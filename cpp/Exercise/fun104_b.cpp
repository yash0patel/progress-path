// 104. b. Example of Recursion function
// ( Function called by itself is known as Recursion function.

#include <iostream>
#include <string.h>
using namespace std;

int i = 1;

int main()
{
    if (i <= 5)
    {
        i++;
        cout << i;
        main();
    }
}