/* 
   This program performs basic arithmetic operations (sum, multiplication, division, difference, and modulus) 
   based on the user's choice for two entered numbers.
*/
#include<stdio.h>
#include<conio.h>
//sum
int sum(int x,int y)
{
	int sum;
	sum = x+y;
return sum;
}
//mult
int mult(int x,int y)
{
	int mult;
	mult = x*y;
return mult;
}
//div
float div(int x,int y)
{
	float div;
	div = (float)x/y;
return div;
}
//diff
int diff(int x,int y)
{
	int diff;
	diff = x-y;
return diff;
}
//mod
int mod(int x,int y)
{
	int mod;
	mod = x%y;
return mod;
}

void main()
{
	int n1,n2,a;
	clrscr();

	printf("Enter two numbers : ");
	scanf("%d%d",&n1,&n2);

	printf(" 1. sum\n 2. multiplay\n 3. differenc\n 4. division\n 5. mod\n");
	scanf("%d",&a);

	switch(a)
	{
		case 1: printf("sum = %d",sum(n1,n2));
			break;
		case 2: printf("mult = %d",mult(n1,n2));
			break;
		case 3: printf("differenc = %d",diff(n1,n2));
			break;
		case 4: printf("division = %.2f",div(n1,n2));
			break;
		case 5: printf("mod = %d",mod(n1,n2));
			break;
		default:printf("\nInvalid choice");
	}
getch();
}