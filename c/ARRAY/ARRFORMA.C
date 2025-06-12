/* Program to display in a specific format */
#include<stdio.h>
#include<conio.h>
void main()
{
	float num[5];
	int i;
	clrscr();

	for(i=0;i<5;i++)
	{
		scanf("%f",&num[i]);
	}
	//[1,2,3,4,5]
	printf("[");
	for(i=0;i<4;i++)
	{
		printf("%.0f,",num[i]);
	}
	printf("%.0f]",num[i]);

getch();
}