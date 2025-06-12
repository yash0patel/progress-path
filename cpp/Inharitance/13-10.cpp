// Program to demonstrate virtual inheritance and accessing inherited members in the derived class.

#include <iostream>
using namespace std;

class obja
{
public:
    int n1=10;
};

class objb: virtual public obja
{
public:
    int n2=20;
};

class objc: virtual public obja
{
public:
    int n3=30;
};

class objd: public objb , public objc
{
public:
    int sum = n1+n2+n3;
}; 
int main()
{
    objd obj;
    cout<<"sum = "<<obj.sum;
}