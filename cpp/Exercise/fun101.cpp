// 101.Example of Nested Function

#include <iostream>
#include <string.h>
using namespace std;

void fun1();
void fun2();

void fun1()
{
 cout<<"In function fun1 "<<endl;
 fun2();
}
void fun2()
{
 cout<<"In Function fun2 "<<endl;
}

int main()
{
    cout<<"In main function "<<endl;
    fun1();
    return 0;
}