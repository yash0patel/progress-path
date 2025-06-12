// 99.Function to reverse the given numbers. (w/o return w. arg.)

#include <iostream>
#include <string.h>
using namespace std;

void reverse(int no)
{
int i=1,rev=0;
cout<<"enter the no : ";
cin>>no;
do 
{
i=no%10;
rev=(rev*10)+i;
no=no/10;
}while (no>0);
cout<<"the reverse no is "<<rev;
}

int main()
{
int no;
reverse(no);
}