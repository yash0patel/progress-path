/* swapping values between two classes using friend function */
#include <iostream>
using namespace std;
class calc
{
private:
    int no1, no2;

public:
    calc(int n1, int n2)
    {
        no1 = n1;
        no2 = n2;
    }
    void disp()
    {
        cout << "no1 = " << no1 << endl;
        cout << "no2 = " << no2 << endl;
    }
    friend void swap(calc &c);
};
void swap(calc &c)
{
    int temp;
    temp = c.no1;
    c.no1 = c.no2;
    c.no2 = temp;
}

int main()
{
    calc c(10, 20);

    c.disp();
    swap(c);
    cout << "\nAfter swapping" << endl;
    c.disp();
}
