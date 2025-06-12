//Program to copy elements from one array to another
#include<stdio.h>
#include<conio.h>
void main()
{
	float num[5],dub[5];
	int i;
	clrscr();

	for(i=0;i<5;i++)
	{
		scanf("%f",&num[i]);
		dub[i] = num[i];
	}
	for(i=0;i<5;i++)
	{
		printf("num[%d] = %f \t dub[%d] = %f \n",i+1,num[i],i+1,dub[i]);
	}


getch();
}