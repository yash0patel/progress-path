// 96.Function to find sum (w return type – w argument)

#include <iostream>
using namespace std;

int sum(int a,int b)
{
    return a+b;
}
int main()
{
    int a,b;
    cout<<"Enter two number"<<endl;
    cin>>a>>b;
    cout<<a<<" + "<<b<<" = "<<sum(a,b);
    return 0;
}