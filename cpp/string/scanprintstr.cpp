// Program to demonstrate string length using built-in function and manual loop.

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char str[50];

    cout<<"Enter name : ";
    gets(str);

    cout<<"name = "<<str<<endl;

    cout<<"string length : "<<strlen(str)<<endl;

    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    cout<<"string length with loop : "<<i;
return 0;
}