// 94.Function to find sum (w/o return type – w argument)

#include <iostream>
using namespace std;

void sum(int a,int b)
{
    cout<<a<<" + "<<b<<" = "<<a+b;
}

int main()
{
    int a,b;
    cout<<"Enter two numbers : "<<endl;
    cin>>a>>b;
    sum(a,b);
    return 0;
}