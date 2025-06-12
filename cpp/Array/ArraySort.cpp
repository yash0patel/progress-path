/* This program sorts an array of 10 integers in ascending order using the bubble sort algorithm. */
#include <iostream>
using namespace std;

int main()
{
    int arr[10], temp = 0;

    for (int i = 0; i < 10; i++)
    {
        cout << "Enter A[" << i << "] : ";
        cin >> arr[i];

    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = i+1; j < 10; j++)
        {
        if (arr[j] < arr[i])
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
        }
    }
    for (int i = 0; i < 10; i++)
    {
        cout << "A[" << i << "] : "<<arr[i]<<"\n";


    }
    

    return 0;
}