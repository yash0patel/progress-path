/* Reverses the digits of a given number */
#include<stdio.h>
#include<conio.h>
int reverse(int a)
{
	int temp,rev=0;

	while(a>0)
	{
		temp = (a%10);
		rev = (rev*10)+temp;
		a = a/10;
	}
return rev;
}
void main()
{
	int num;
	clrscr();

	printf("Enter number : ");
	scanf("%d",&num);

	printf("\nreverse number is %d",reverse(num));

getch();
}