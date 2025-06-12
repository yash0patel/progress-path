/* Program to input and display temperatures of 5 different cities */
#include<stdio.h>
#include<conio.h>
void main()
{
	int tem[5],i;
	clrscr();

	for(i=0;i<5;i++)
	{
		scanf("%d",&tem[i]);
	}

	printf("temperature of 5 different city is : ");
	for(i=0;i<5;i++)
	{
		printf("%d ",tem[i]);
	}


getch();
}