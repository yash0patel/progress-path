// 102. WAP to evaluate p = x / (y – z) by checking whether value of denominator two variables are same or not. (w. return and w. arg. )

#include <iostream>
#include <string.h>
using namespace std;

int find(int, int);
float sum(int, int, int);

int main()
{
    int a, b, c;
    float a1;
    cout << "Enter 3 numbers : ";
    cin >> a >> b >> c;
    a1 = sum(a, b, c);
    if (a1 == 0)
        cout << "Not Possible";
    else
        cout << a1;
return 0;
}
float sum(int x, int y, int z)
{
    float p;
    int ans = find(y, z);
    if (ans == 0)
        return 0;
    else
        p = x / (y - z);
    return p;
}
int find(int p, int q)
{
    if (p == q)
        return 0;
    else
        return 1;
}
