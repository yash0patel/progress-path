// 98.Function to find Simple Interest (w/o return type w arg)


#include <iostream>
using namespace std;

void interest(float p, float r, float n)
{
float ans;
cout<<"\n Enter p:->";
cin>>p;
cout<<"\n Enter r:->";
cin>>r;
cout<<"\n Enter no.of years:->";
cin>>n;
ans=((p*r*n)/100);
cout<<"\n The ans is :->"<<ans;
}

int main()
{
float p,r,n;
interest(p, r, n);
return 0;
}