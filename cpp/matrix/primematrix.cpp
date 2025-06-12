// Generating prime numbers in a matrix based on user-defined rows and columns

#include <iostream>
using namespace std;

int main()
{
    int mat[50][50], count = 0, col, row, a, num = 0;

    cout << "Enter number of column : ";
    cin >> col;
    cout << "Enter number of row : ";
    cin >> row;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            while (1)
            {
                count = 0;
                num++;
                for (int k = 2; k < num; k++)
                {
                    if (num % k == 0)
                    {
                        count++;
                    }
                }
                if (count == 0 && num != 1)
                {
                    cout << num << "\t";
                    break;
                }
            }
        }
        cout << "\n";
    }

    return 0;
}