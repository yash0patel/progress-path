/* This program takes an array of 10 integers as input and displays the value at a specified index. */
#include <iostream>
using namespace std;

int main()
{
    int arr[10], index;

    for (int i = 0; i < 10; i++)
    {
        cout << "Enter A[" << i << "] : ";
        cin >> arr[i];
    }

    cout << "Enter index number : ";
    cin >> index;

    cout << "A["<<index<<"] = "<<arr[index];
    
return 0;
}