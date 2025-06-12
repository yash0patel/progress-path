// 97.Function to find avg (w return type – w argument)

#include <iostream>
using namespace std;

float avg(int x, int y)
{
 float c = (x + y) / 2;
 return c;
}

int main()
{
 int a, b;
 float c;
 cout<<"Enter two numbers : ";
 cin>>a>>b;
 c = avg(a,b);
 cout<<"Average of two numbers : "<<c;
 return 0;
}