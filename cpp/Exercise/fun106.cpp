// 106.Function to find Maximum and Minimum Number (passing array)

#include <iostream>
using namespace std;

int findbiggest(int no[10]);
int findsmallest(int no[10]);
void readnum(int temp[10]);

int main()
{
    int i, big, small, num[10];

    cout << "\n Enter 10 no's. : ";
    readnum(num);
    big = findbiggest(num);
    small = findsmallest(num);
    cout << "big : " << big<<endl;
    cout << "\n small : " << small<<endl;
    return 0;
}

void readnum(int temp[10])
{
    int j;
    for (j = 0; j < 10; j++)
        cin >> temp[j];
}

int findbiggest(int no[10])
{
    int bigtemp = no[0], k;
    for (k = 0; k < 10; k++)
    {
        if (no[k] > bigtemp)
            bigtemp = no[k];
    }
    return bigtemp;
}

int findsmallest(int no[10])
{
    int smalltemp = no[0], k;
    for (k = 0; k < 10; k++)
    {
        if (no[k] < smalltemp)
            smalltemp = no[k];
    }
    return smalltemp;
}
