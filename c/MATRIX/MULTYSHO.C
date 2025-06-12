//Matrix Multiplication 3x3
#include<stdio.h>
#include<conio.h>
void main()
{
	int m[3][3],n[3][3],multiply[3][3]={0},i,j,k;
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
	printf("2nd metrix\n\n");
// 2 metrix
	for(i=0;i<3;i++)
	{       for(j=0;j<3;j++)
		{
			printf("Enter R%d%d = ",i+1,j+1);
			scanf("%d",&n[i][j]);
		}
	}

// multiply
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				multiply[i][j] = multiply[i][j] + (m[i][k]*n[k][j]);
			}
		}

	}
	printf("\nMatrix form : \n\n");


	/*   1 matrix * 2 matrix  =
				  multiply      */
	printf("%d\t%d\t%d\t \t%d\t%d\t%d\n",m[0][0],m[0][1],m[0][2],n[0][0],n[0][1],n[0][2]);
	printf("%d\t%d\t%d\t*\t%d\t%d\t%d\t=\n",m[1][0],m[1][1],m[1][2],n[1][0],n[1][1],n[1][2]);
	printf("%d\t%d\t%d\t \t%d\t%d\t%d\n",m[2][0],m[2][1],m[2][2],n[2][0],n[2][1],n[2][2]);

	for(i=0;i<3;i++)
	{       printf("\t\t\t\t\t\t\t");
		for(j=0;j<3;j++)
		{
				printf("%d\t",multiply[i][j]);
		}
		printf("\n");
	}
getch();
}