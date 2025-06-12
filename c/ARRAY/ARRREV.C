/* Program to reverse an array and display original and reversed elements */

#include<stdio.h>
#include<conio.h>
void main()
{
	float num[5],rev[5];
	int i;
	clrscr();

	for(i=0;i<5;i++)
	{
		scanf("%f",&num[i]);
	}
	for(i=0;i<5;i++)
	{
		rev[i]=num[4-i];
	}
	for(i=0;i<5;i++)
	{
		printf("num[%d] = %f \t rev[%d] = %f \n",i+1,num[i],i+1,rev[i]);
	}


getch();
}