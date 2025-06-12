// 103.Function to find maximum from the array elements ( passing array as argument )

#include <iostream>
#include <string.h>
using namespace std;

void max( int [], int);
int main()
{
 int a[5], i, n = 5;
 for(i = 0 ; i <n ; i++)
 {
 cin>>a[i];
 }
 max( a, n);
}
void max(int x[5], int n)
{
 int i , max1;
 max1=x[0];
 for(i=0; i<n; i++)
 {
 if ( max1 < x[i])
 {
 max1 = x[i];
 }
 }
 cout<<"max = "<<max1;
}