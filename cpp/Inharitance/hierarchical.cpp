// Demonstrating Hierarchical Inheritance in C++.
#include <iostream>
using namespace std;

#include <iostream>

class objA
{
public:
    void obj1()
    {
        cout << "A" << endl;
    }
};

class objB : public objA
{
public:
    void obj2()
    {
        cout << "B" << endl;
    }
};

class objC : public objA
{
public:
    void obj3()
    {
        cout<<"C"<<endl;
    }
};

int main()
{

    objC obj;
    objB o2;
    objA o1;
    o1.obj1();
    o2.obj1();
    o2.obj2();
    obj.obj1();
    obj.obj3();
    return 0;
}
