//Matrix Determinant Display
#include<stdio.h>
#include<conio.h>
void main()
{
	int m[3][3],det,i,j;
	clrscr();

	printf("1st metrix\n\n");
// 1 metrix
//	/*
	for(i=0;i<3;i++)
	{       for(j=0;j<3;j++)
		{
			printf("Enter R%d%d = ",i+1,j+1);
			scanf("%d",&m[i][j]);
		}
	}
//	*/
	/*
	for(i=0;i<3;i++)
	{
			m[0][i] = 2;
			m[1][i] = 22;
			m[2][i] = 55;
	}
//	*/

// det[1 metrix]

	det = m[0][0]*((m[1][1]*m[2][2])-(m[2][1]*m[1][2])) - m[0][1]*((m[1][0]*m[2][2])-(m[1][2]*m[2][0])) + m[0][2]*((m[1][0]*m[2][1])-(m[1][1]*m[2][0]));


	printf("\nMatrix form : \n\n");

//	1 matrix    =  det[1 metrix]

	printf("%d\t%d\t%d\n",m[0][0],m[0][1],m[0][2]);
	printf("%d\t%d\t%d\t=\t%d\n",m[1][0],m[1][1],m[1][2],det);
	printf("%d\t%d\t%d\n",m[2][0],m[2][1],m[2][2]);

getch();
}