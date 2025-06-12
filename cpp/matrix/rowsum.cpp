// Calculating row and column sums of a 3x3 matrix

#include <iostream>
using namespace std;

int main()
{
    int mat[3][3] , row_sum , col_sum[3] = {0};

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
        row_sum = 0;
        for (int j = 0; j < 3; j++)
        {
            cout << mat[i][j] << "\t";
            row_sum+=mat[i][j];
            if (i==0)
            {
                col_sum[0] += mat[i][j];
            }
            if (i==1)
            {
                col_sum[1] += mat[i][j];
            }
            if (i==2)
            {
                col_sum[2] += mat[i][j];
            }
        }
        cout << "\tsum = "<<row_sum<<"\n";
        if (i >= 2)
        {
            cout<<"\n"<<col_sum[0]<<"\t"<<col_sum[1]<<"\t"<<col_sum[2];
        }
        
    }
return 0;
}