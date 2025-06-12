/* program demonstrating the use of friend functions for swapping values between two classes */

#include <iostream>
#include <string.h>
using namespace std;

class calc1;
class calc2;

class calc1
{
private:
    int n1;

public:
    calc1()
    {
    }
    calc1(int n1)
    {
        this->n1 = n1;
    }
    void disp()
    {
        cout << "\ncalc1 n1 : " << n1;
    }
    friend void swap(calc1 &c1, calc2 &c2);
};
class calc2
{
private:
    int n2;

public:
    calc2()
    {
    }
    calc2(int n2)
    {
        this->n2 = n2;
    }
    void disp()
    {
        cout << "\ncalc2 n2 : " << n2;
    }
    friend void swap(calc1 &c1, calc2 &c2);
};

void swap(calc1 &c1, calc2 &c2)
{
    int temp = c1.n1;
    c1.n1 = c2.n2;
    c2.n2 = temp;
}

int main()
{
    calc1 c1(10);
    calc2 c2(20);

    c1.disp();
    c2.disp();
    swap(c1, c2);
    cout << "\nAfter swapping : ";
    c1.disp();
    c2.disp();
    return 0;
}
