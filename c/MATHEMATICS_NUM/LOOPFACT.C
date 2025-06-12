/* Calculates and displays the factorial of a given number */
#include<stdio.h>
#include<conio.h>
void main()
{
	int num,fact=1,i;
	clrscr();

	printf("Enter number : ");
	scanf("%d",&num);

	for(i=1;i<=num;i++)
	{
		fact=fact*i;
	}
	printf("factorial of %d is %d",num,fact);
getch();
}