// Program demonstrating constructor overloading, copy constructor, and destructor in the 'product' class.

#include <iostream>
#include <string.h>
using namespace std;

class product
{
    char p_name[30];
    int p_id;
    float p_prize;
    char m_date[20];

public:
    product()
    {
        cout << "Enter product details"<<endl;
    }

    product(int p_id)
    {
        this->p_id = p_id;
    }

    product(product &s)
    {
        this->p_id = s.p_id;
        strcpy(p_name, s.p_name);
        this->p_prize = s.p_prize;
        strcpy(m_date, s.m_date);
    }
    void disp()
    {
        cout << "product id : " << p_id << endl;
        cout << "product name : " << p_name << endl;
        cout << "product prize : " << p_prize << endl;
        cout << "product manufacturing date : " << m_date << endl;
    }

    void scan()
    {
        cout << "Enter product details : " << endl;
        // cout<<"product id : ";
        // cin>>p_id;
        cout << "product name : ";
        fflush(stdin);
        gets(p_name);
        cout << "product prize : ";
        cin >> p_prize;
        cout << "product manufacturing date : ";
        fflush(stdin);
        gets(m_date);
    }

    ~product()
    {
        cout<<"successful"<<endl;
    }
};

int main()
{
    product p1(1225);

    p1.scan();

    product p2(p1);

    p2.disp();
}