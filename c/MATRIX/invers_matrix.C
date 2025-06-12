//Matrix Inversion Using Gaussian Elimination
#include<stdio.h>
#include<conio.h>
void main()
{
	float m[3][3],id[50][50],size,temp,i,j,k;
	clrscr();

	printf("Enter size of metrix : ");
	scanf("%f",&size);

	printf("\nEnter eliments of metrix\n\n");
	for(i=0;i<3;i++)
	{       for(j=0;j<3;j++)
		{
			printf("Enter R%.0f%.0f = ",i+1,j+1);
			scanf("%f",&m[i][j]);
			//identity matrix
			if(i == j)
			{
				id[i][j] = 1;
			}
			else
			{
				id[i][j] = 0;
			}
		}
	}

	clrscr();

//print matrix A
	printf("\nMatrix A : \n\n");

	for(i=0;i<3;i++)
	{
		printf("\t\t");
		for(j=0;j<3;j++)
		{
				printf("%.0f\t",m[i][j]);
		}
		printf("\n");
	}

// det[A metrix]

	//inverse
		for(i=0;i<size;i++)
		{
			if(m[i][i] == 0)
			{
				for(j=i+1;j<size;j++)
				{
					for(k=0;k<size;k++)
					{
						temp = m[i][k];
						m[i][k] = m[j][k];
						m[j][k] = temp;

						temp = id[i][k];
						id[i][k] = id[j][k];
						id[j][k] = temp;
					}
				}
				break;
			}

			temp = m[i][i];
			for(j=0;j<size;j++)
			{
				m[i][j] = m[i][j]/temp;
				id[i][j] = id[i][j]/temp;
			}

			for(j=0;j<size;j++)
			{
				if(i != j)
				{
					temp = m[j][i];
					for(k=0;k<size;k++)
					{
						m[j][k] = m[j][k] - (m[i][k]*temp);
						id[j][k] = id[j][k] - (id[i][k]*temp);
					}
				}
			}
		}

/*		//print identity matrix
		for(i=0;i<size;i++)
		{
			printf("\t\t");
			for(j=0;j<size;j++)
			{
					printf("%.2f\t",m[i][j]);
			}
			printf("\n");
		}
*/
		//print invers of matrix A
		printf("\ninvers of A : \n");
		for(i=0;i<size;i++)
		{
			printf("\t\t");
			for(j=0;j<size;j++)
			{
					printf("%.3f\t",id[i][j]);
			}
			printf("\n");
		}

getch();
}
