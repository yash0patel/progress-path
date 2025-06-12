// Demonstrating Single Inheritance
#include <iostream>
using namespace std;

#include <iostream>

class objA
{
public:
    void obj1()
    {
        cout << "A"<<endl;
    }
};

class objB : public objA
{
public:
    void obj2()
    {
        cout << "B"<<endl;
    }
};

int main()
{

    objB obj;

    obj.obj1();
    obj.obj2();
    return 0;
}
