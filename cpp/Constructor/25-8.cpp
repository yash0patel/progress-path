// Program to demonstrate constructor overloading and copy constructor in the 'product' class.

#include <iostream>
#include <string.h>
using namespace std;

class product
{
    char p_name[50];
    int pid;
    float prize;
    char mdate[20];
    char exdate[20];


public:
    product()
    {
        cout << "Enter product details" << endl;
    }

    product(int pid, char p_name[], float prize, char mdate[], char exdate[])
    {
        cout << "\nSTART :: para Constructor";
        this->pid = pid;
        strcpy(this->p_name, p_name);
        this->prize = prize;
        strcpy(this->mdate,mdate);
        strcpy(this->exdate,exdate);
        cout << "\nEXIT :: para Constructor";
    }

    product(product &s)
    {
        cout << "\nSTART :: copy Constructor";
        this->pid = s.pid;
        strcpy(this->p_name, s.p_name);
        this->prize = s.prize;
        strcpy(this->mdate,s.mdate);
        strcpy(this->exdate,s.exdate);
        cout << "\nEXIT :: copy Constructor";
    }

    void disp()
    {
        cout<<"product id : "<<pid<<endl;
        cout<<"product name : "<<p_name<<endl;
        cout<<"product prize : "<<prize<<endl;
        cout<<"product manufacturing date : "<<mdate<<endl;
        cout<<"product expiring date : "<<exdate<<endl;
    }

    void scan()
    {
        cout<<"Enter product details : "<<endl;
        cout<<"product id : ";
        cin>>pid;
        cout<<"product name : ";
        fflush(stdin);
        gets(p_name);
        cout<<"product prize : ";
        cin>>prize;
        cout<<"product manufacturing date : ";
        fflush(stdin);
        gets(mdate);
        cout<<"product expiring date : ";
        fflush(stdin);
        gets(exdate);
    }
};

int main()
{
    product p1(10015,"xyz",4999,"2/5/2023","2/5/2025");

    p1.disp();

    p1.scan();
    product p2(p1);

    p2.disp();
    return 0;
}