/* Calculates and displays the sum of the digits of a given number */
#include<stdio.h>
#include<conio.h>
void main()
{	int n1,j=0,i;
	clrscr();
	printf("enter number : ");
	scanf("%d",&n1);
	while(n1>0)
	{
		i=n1%10;
		n1=n1/10;
		j=j+i;

	}
	printf("sum = %d",j);
getch();
}