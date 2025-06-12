// Performs addition, subtraction, and multiplication on two 3x3 matrices
#include<stdio.h>
#include<conio.h>

void main()
{
	int m[3][3],n[3][3],sum[3][3]={0},sub[3][3]={0},multy[3][3]={0},i,j,choice;

	clrscr();
	printf("Enter value of matrix 1: \n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("m[%d][%d] = ",i+1,j+1);
			scanf("%d",&m[i][j]);
		}
	}
	printf("\n\nEnter value of matrix 2: \n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("n[%d][%d]",i+1,j+1);
			scanf("%d",&n[i][j]);
		}
	}
	while(1)
	{
	clrscr();
	printf("1 - addition\n");
	printf("2 - substrection\n");
	printf("3 - multy\n");
	printf("4 - exit\n");

	printf("Enter the choice : ");
	scanf("%d",&choice);

	switch(choice)
		{
		 case 1:printf("addition\n");
			// display a2[][] + a3[][] =
			printf("%d\t%d\t%d\t \t%d\t%d\t%d\n",m[0][0],m[0][1],m[0][2],n[0][0],n[0][1],n[0][2]);
			printf("%d\t%d\t%d\t+\t%d\t%d\t%d\t=\n",m[1][0],m[1][1],m[1][2],n[1][0],n[1][1],n[1][2]);
			printf("%d\t%d\t%d\t \t%d\t%d\t%d\n",m[2][0],m[2][1],m[2][2],n[2][0],n[2][1],n[2][2]);

			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					sum[i][j]=m[i][j] + n[i][j];
				}
			 }
			 for(i=0;i<3;i++)
			 {
				printf("\t\t\t\t\t\t\t");
				for(j=0;j<3;j++)
				{
					printf("%d\t",sum[i][j]);
				}
			 printf("\n");
			 }
			 break;

		  case 2:printf("substrection\n");
			 // display a2[][] - a3[][] =
			 printf("%d\t%d\t%d\t \t%d\t%d\t%d\n",m[0][0],m[0][1],m[0][2],n[0][0],n[0][1],n[0][2]);
			 printf("%d\t%d\t%d\t-\t%d\t%d\t%d\t=\n",m[1][0],m[1][1],m[1][2],n[1][0],n[1][1],n[1][2]);
			 printf("%d\t%d\t%d\t \t%d\t%d\t%d\n",m[2][0],m[2][1],m[2][2],n[2][0],n[2][1],n[2][2]);

			 for(i=0;i<3;i++)
			 {
				for(j=0;j<3;j++)
				{
					sub[i][j] = m[i][j] - n[i][j];
				}
			 }
			 for(i=0;i<3;i++)
			 {
				printf("\t\t\t\t\t\t\t");
				for(j=0;j<3;j++)
				{
					printf("%d\t",sub[i][j]);
				}
			 printf("\n");
			 }
			 break;
		  case 3:printf("multy\n");
			// display a2[][] x a3[][] =
			printf("%d\t%d\t%d\t \t%d\t%d\t%d\n",m[0][0],m[0][1],m[0][2],n[0][0],n[0][1],n[0][2]);
			printf("%d\t%d\t%d\tx\t%d\t%d\t%d\t=\n",m[1][0],m[1][1],m[1][2],n[1][0],n[1][1],n[1][2]);
			printf("%d\t%d\t%d\t \t%d\t%d\t%d\n",m[2][0],m[2][1],m[2][2],n[2][0],n[2][1],n[2][2]);

			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					multy[i][j] =  (m[i][0] * n[0][j]) + (m[i][1] * n[1][j]) + (m[i][2] * n[2][j]);
				}
			}
			for(i=0;i<3;i++)
			{
				printf("\t\t\t\t\t\t\t");
				for(j=0;j<3;j++)
				{
					printf("%d\t",multy[i][j]);
				}
			printf("\n");
			}
			break;
		  case 4 : exit(0);
		} //close switch case
		if(choice > 4)
		{
			printf("ERROR");
		}
		getch();
	}

}