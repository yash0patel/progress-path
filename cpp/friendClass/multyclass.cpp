/* Swapping values between two classes (calc1 and calc2) using friend function */

#include <iostream>
using namespace std;
class calc1
{

private:
    int n1;

public:
    calc1(int a)
    {
        n1 = a;
    }

    int getN1() 
    {
        return n1; 
    }
    void setN1(int value) 
    { 
        n1 = value; 
    }

    void disp()
    {
        cout << "n1 = " << n1 << endl;
    }
    friend void swap(calc1 &c1, calc2 &c2);
};

class calc2
{

private:
    int n2;

public:
    calc2(int b)
    {
        n2 = b;
    }

    int getN2() 
    {
        return n2; 
    }
    void setN2(int value) 
    { 
        n2 = value; 
    }

    void disp()
    {
        cout << "n2 = " << n2 << endl;
    }
    friend void swap(calc1 &c1, calc2 &c2);
};

void swap(calc1 &c1, calc2 &c2)
{
    int temp;
    temp = c1.getN1();
    c1.setN1(c2.getN2());
    c2.setN2(temp); 
}

int main()
{
    class calc1 c1(10);
    class calc2 c2(20);

    c1.disp();
    c2.disp();

    swap(c1, c2);
    cout << "\nAfter swapping" << endl;

    c1.disp();
    c2.disp();
}