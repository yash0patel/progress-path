/* Counts the number of digits in a given number */
#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,i=0;
	clrscr();
	printf("Enter number : ");
	scanf("%d",&n1);

	while(n1>0)
	{
		n1=n1/10;
		i++;
	}

	printf("digit = %d",i);

getch();
}
