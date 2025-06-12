// Demonstration of different types of inheritance in C++.

#include <iostream>
using namespace std;

// single inharitance
/*
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
}
*/

// multilevel inharitance
/*
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

class objC : public objB
{
public:
    void obj3()
    {
        cout << "C"<<endl;
    }
};

int main()
{
    objC obj;
    obj.obj1();
    obj.obj2();
    obj.obj3();
}
*/

// hierarchical inharitance
/*
class objA
{
    public:
    void obj1()
    {
        cout<<"A"<<endl;
    }
};

class objB : public objA
{
    public:
    void obj2()
    {
        cout<<"B"<<endl;
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
    objB o2;
    objC o3;
    o2.obj1();
    o2.obj2();
    o3.obj1();
    o3.obj3();
}
*/
// hybrid inharitance


class objA
{
    public:
    void obj1()
    {
        cout<<"A"<<endl;
    }
};

class objB : public virtual objA
{
    public:
    void obj2()
    {
        cout<<"B"<<endl;
    }
};


class objC : public virtual objA
{
    public:
    void obj3()
    {
        cout<<"C"<<endl;
    }
};

class objD : public objB, public objC
{
    public:
    void obj4()
    {
        cout<<"D"<<endl;
    }
};
int main()
{
    objB o2;
    objC o3;
    objD o4;
    o4.obj1();
}








