// Demonstrating Hybrid Inheritance with Virtual Inheritance
#include <iostream>
using namespace std;

class objA
{
public:
    int n1;
};

class objB : public virtual objA
{
public:
    int n2;
};

class objC : virtual public objA
{
public:
    int n3;
};

class objD : public objB, public objC
{
public:
    int n4;
};

int main()
{

    objD obj;

    obj.n1 = 10;

    cout<<"obj.n1 = "<<obj.n1;
    return 0;
}
