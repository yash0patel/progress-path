/* Displays all divisors of the given number */
#include<stdio.h>
#include<conio.h>
void main()
{
	int num,i;
	clrscr();

	printf("Enter number : ");
	scanf("%d",&num);

	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			printf("%d\t",i);
		}
	}
getch();
}