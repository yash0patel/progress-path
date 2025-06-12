// Program to concatenate first and last name using strcat.

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char str1[50], str2[50];

    cout<<"Enter first name : ";
    gets(str1);

    cout<<"Enter last name : ";
    gets(str2);

    cout<<"name = "<<strcat(strcat(str1," "),str2)<<endl;

return 0;
}