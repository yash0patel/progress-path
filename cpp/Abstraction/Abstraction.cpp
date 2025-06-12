/* Demonstrates the use of abstraction, virtual functions, and polymorphism. */

#include <iostream>
using namespace std;

class Vehicle
{
public:
    virtual void getSpec() = 0;
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