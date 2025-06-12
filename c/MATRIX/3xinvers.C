//Matrix-Determinant-and-Inverse
#include<stdio.h>
#include<conio.h>
void main()
{
	int m[3][3],a[3][3],det,i,j;
	clrscr();

	printf("1st metrix\n\n");
// 1 metrix

	for(i=0;i<3;i++)
	{       for(j=0;j<3;j++)
		{
			printf("Enter R%d%d = ",i+1,j+1);
			scanf("%d",&m[i][j]);
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
				printf("%d\t",m[i][j]);
		}
		printf("\n");
	}

// det[A metrix]

	det = m[0][0]*((m[1][1]*m[2][2])-(m[2][1]*m[1][2])) - m[0][1]*((m[1][0]*m[2][2])-(m[1][2]*m[2][0])) + m[0][2]*((m[1][0]*m[2][1])-(m[1][1]*m[2][0]));
	printf("\n\ndetermunat of matrix A is : %d\n",det);

	if(det != 0)
	{
	//inverse
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				a[0][0] = (m[1][1]*m[2][2]) - (m[2][1]*m[1][2]);
				a[0][1] = -1*((m[1][0]*m[2][2]) - (m[2][0]*m[1][2]));
				a[0][2] = (m[1][0]*m[2][1]) - (m[2][0]*m[1][1]);

				a[1][0] = -1*((m[0][1]*m[2][2]) - (m[2][1]*m[0][2]));
				a[1][1] = (m[0][0]*m[2][2]) - (m[2][0]*m[0][2]);
				a[1][2] = -1*((m[0][0]*m[2][1]) - (m[2][0]*m[0][1]));

				a[2][0] = (m[0][1]*m[1][2]) - (m[1][1]*m[0][2]);
				a[2][1] = -1*((m[0][0]*m[1][2]) - (m[1][0]*m[0][2]));
				a[2][2] = (m[0][0]*m[1][1]) - (m[1][0]*m[0][1]);
			}
		}

	//printt inverse
		printf("\ninvers of A : \n");
		for(i=0;i<3;i++)
		{
			printf("\t\t");
			for(j=0;j<3;j++)
			{
					printf("%d/(%d)\t",a[j][i],det);
			}
			printf("\n");
		}
	}
	else
	{
		printf("\ninverse of matrix is not possible");
	}
getch();
}
