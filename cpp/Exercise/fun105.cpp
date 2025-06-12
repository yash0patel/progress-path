// 105.Function to find Factorial (w return type w arg recursion)

#include <iostream>
#include <string.h>
using namespace std;

int fact(int);

int main()
{
    int no, ans;
    cout<<"\n Enter a no: ";
    cin>>no;
    ans=fact(no);
    cout<<ans;
    return 0;
}

int fact(int n)
{
    int a;

    if (n==1)
    {
        return 1;
    }
    else
    {
        a = n*fact(n-1);
    }

    return a;
}