/* 
   Check if the entered number is even or odd
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	clrscr();

	printf("Enter number : ");
	scanf("%d",&n);

	if(n%2==0)
	{
		printf("%d is even",n);
	}
	else
	{
		printf("%d is odd",n);
	}
getch();
}
