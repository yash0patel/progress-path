// Matrix input and prime number display in matrix example

#include <iostream>
using namespace std;

int main()
{
    int mat[3][3], count = 0;

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
            count = 0;
            for (int k = 2; k < mat[i][j]; k++)
            {
                if (mat[i][j] % k == 0)
                {
                    count++;
                }
            }

            if (count == 0 && mat[i][j] != 1)
            {
                cout << mat[i][j] << "\t";
            }
            else
            {
                cout << "\t";
            }
        }
        cout << "\n";
    }

    return 0;
}