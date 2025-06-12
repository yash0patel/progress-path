/* program to demonstrate the use of friend function for adding two numbers */

#include <iostream>
using namespace std;

class num
{
private:
    int no1,no2,ans;
public:
    num(int n1,int n2)
    {
        no1 = n1;
        no2 = n2;
    }
    void disp()
    {
        cout<<no1<<" + "<<no2<<" = "<<ans;
    }
    friend void addnum(num &s);
};
void addnum(num &s)
{
    s.ans = s.no1 + s.no2;
}
int main()
{
    num s(50,25);
    addnum(s);
    s.disp();
}