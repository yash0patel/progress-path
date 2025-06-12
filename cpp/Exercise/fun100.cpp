// 100. Function to sum all digit in the given number.(w/o return w. arg.)

#include <iostream>
#include <string.h>
using namespace std;

void sum_all(int no)
{
int i=1, sum=0;
do 
{
i=no%10;
sum=sum+i;
no=no/10;
}while (no>0);
cout<<"the sum is "<<sum;
}

int main()
{
int no;
cout<<"enter the no : ";
cin>>no;
sum_all(no);
return 0;
}