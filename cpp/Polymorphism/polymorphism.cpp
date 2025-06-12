/* C++ program demonstrating the use of virtual functions and runtime polymorphism for different vehicle types */

#include <iostream>
using namespace std;

class Vehicle
{
public:
    virtual void getSpec()
    {
        cout<<"\nVehicle--getSpec()";
    }
};
class Twvehical : public Vehicle
{
public:
    void getSpec()
    {
        cout<<"\nTwVehicle--getSpec()";
    }
};
class Lmvvehical : public Vehicle
{
public:
    void getSpec()
    {
        cout<<"\nLmvVehicle--getSpec()";
    }
};
class Hmvvehical : public Vehicle
{
public:
    void getSpec()
    {
        cout<<"\nHmvVehicle--getSpec()";
    }
};
int main()
{
    int ch;
    Twvehical tw;
    Lmvvehical lmv;
    Hmvvehical hmv;
    cout<<"\nEnter below choice : ";
    cout<<"\n1) for TwVehicle";
    cout<<"\n2) for LmvVehicle";
    cout<<"\n3) for HmvVehicle\n";
    cin>>ch;

    Vehicle *vptr;

    switch (ch)
    {
    case 1:
        vptr = &tw;
        vptr->getSpec();
        break;
    case 2:
        vptr = &lmv;
        vptr->getSpec();
        break;
    case 3:
        vptr = &hmv;
        vptr->getSpec();
        break;
    default:
        cout<<"Invalide choice";
        break;
    }
    return 0;
}