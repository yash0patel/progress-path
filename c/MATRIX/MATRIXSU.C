//Matrix Sum
#include<stdio.h>
#include<conio.h>
void main()
{
	int m[3][3],n[3][3],sum[3][3],i,j;
	clrscr();

	printf("1st metrix\n\n");
// 1 metrix
// 	/*
	for(i=0;i<3;i++)
	{
		printf("Enter R%d1 = ",i+1);
			scanf("%d",&m[i][0]);
		printf("Enter R%d2 = ",i+1);
			scanf("%d",&m[i][1]);
		printf("Enter R%d3 = ",i+1);
			scanf("%d",&m[i][2]);
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

	printf("2nd metrix\n\n");
// 2 metrix
//       /*
	for(i=0;i<3;i++)
	{
		printf("Enter R%d1 = ",i+1);
			scanf("%d",&n[i][0]);
		printf("Enter R%d2 = ",i+1);
			scanf("%d",&n[i][1]);
		printf("Enter R%d3 = ",i+1);
			scanf("%d",&n[i][2]);
	}
//      */
	/*
	for(i=0;i<3;i++)
	{
			n[0][i] = 5;
			n[1][i] = 11;
			n[2][i] = 50;
	}
//      */

// sum
	for(i=0;i<3;i++)
	{
			sum[0][i] =  m[0][i] + n[0][i];
			sum[1][i] =  m[1][i] + n[1][i];
			sum[2][i] =  m[2][i] + n[2][i];
	}

	printf("\nMatrix form : \n\n");


//	1 matrix  +  2 matrix  =  sum
	/*
	printf("%d\t%d\t%d\t \t%d\t%d\t%d\t \t%d\t%d\t%d\n",m[0][0],m[0][1],m[0][2],n[0][0],n[0][1],n[0][2],sum[0][0],sum[0][1],sum[0][2]);
	printf("%d\t%d\t%d\t+\t%d\t%d\t%d\t=\t%d\t%d\t%d\n",m[1][0],m[1][1],m[1][2],n[1][0],n[1][1],n[1][2],sum[1][0],sum[1][1],sum[1][2]);
	printf("%d\t%d\t%d\t \t%d\t%d\t%d\t \t%d\t%d\t%d\n",m[2][0],m[2][1],m[2][2],n[2][0],n[2][1],n[2][2],sum[2][0],sum[2][1],sum[2][2]);
//	*/

	/*   1 matrix + 2 matrix  =
				  sum      */
//	/*
	printf("%d\t%d\t%d\t \t%d\t%d\t%d\n",m[0][0],m[0][1],m[0][2],n[0][0],n[0][1],n[0][2]);
	printf("%d\t%d\t%d\t+\t%d\t%d\t%d\t=\n",m[1][0],m[1][1],m[1][2],n[1][0],n[1][1],n[1][2]);
	printf("%d\t%d\t%d\t \t%d\t%d\t%d\n",m[2][0],m[2][1],m[2][2],n[2][0],n[2][1],n[2][2]);

	for(i=0;i<3;i++)
	{       printf("\t\t\t\t\t\t\t");
		for(j=0;j<3;j++)
		{
				printf("%d\t",sum[i][j]);
		}
		printf("\n");
	}
//	*/
getch();
}