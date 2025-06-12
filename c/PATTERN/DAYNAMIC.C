/* Program to print a pattern of stars in a specific format with three columns */
#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1,j=1,k=1,r=1;
	clrscr();
	while(r<=5)
	{
	i=1;
	while(i<=r)
	{
		printf("*");
		i++;
	}
	printf("\t");
	j=1;
	while(j<=r)
	{
		printf("*");
		j++;
	}
	printf("\t");

	k=1;
	while(k<=r)
	{
		printf("*");
		k++;
	}
	printf("\n");

	r++;
	}
getch();
}
