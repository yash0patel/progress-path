/* Program to find the smallest and largest numbers in an array */
#include<stdio.h>
#include<conio.h>
void main()
{
	int num[5],i,j;
	clrscr();

	for(i=0;i<5;i++)
	{
		printf("Enter %d number : ",i+1);
		scanf("%d",&num[i]);
	}
	for(i=0;i<5;i++)
	{
		if(num[i] <= num[0] && num[i] <= num[1] && num[i] <= num[2] && num[i] <= num[3] && num[i] <= num[4])
		{
			printf("\nsmallest number is %d\n",num[i]);
		}
		if(num[i] >= num[0] && num[i] >= num[1] && num[i] >= num[2] && num[i] >= num[3] && num[i] >= num[4])
		{
			printf("\nlargest number is %d",num[i]);
		}
	}

getch();
}