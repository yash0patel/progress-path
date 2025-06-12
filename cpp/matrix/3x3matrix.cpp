// Matrix input, display, and diagonal printing example in C++

#include <iostream>
using namespace std;

int main()
{
    int mat[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter mat[" << i + 1 << "][" << j + 1 << "] : ";
            cin >> mat[i][j];
        }
    }
    cout << "\n\nmatrix form\n\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << mat[i][j] << "\t";
        }
        cout << "\n";
    }
cout << "\n\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
            {
                cout << mat[i][j];
            }
            cout << "\t";
        }
        cout << "\n";
    }
cout << "\n\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (j == 3-(i+1))
            {
                cout << mat[i][j];
            }
            cout << "\t";
        }
        cout << "\n";
    }
    return 0;
}