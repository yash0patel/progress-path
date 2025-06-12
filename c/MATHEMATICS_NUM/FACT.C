/* Calculates factorials, sums of factorials, and averages, then displays the results */
#include<stdio.h>
#include<conio.h>

int factorial(int n)
{
	int fact=1,i;

	for(i=1;i<=n;i++)
	{
		fact*=i;
	}

       return fact;
}

float avg(int x , int y)
{
	int avg;
	avg = (x+y)/2.0;

	return avg;
}

void main()
{
	int a,b,c,d,e,ab,cd;
	float sum;
	clrscr();

	printf("Enter number : ");
	scanf("%d",&a);
	factorial(a);
	printf("Enter number : ");
	scanf("%d",&b);
	factorial(b);

	ab = factorial(a) + factorial(b);
	printf("sum = %d",ab);

	printf("\nEnter number : ");
	scanf("%d",&c);
	factorial(c);
	printf("Enter number : ");
	scanf("%d",&d);
	factorial(d);

	cd = factorial(c) + factorial(d);
	printf("sum = %d\n",cd);

	printf("\naverage of %d and %d is %.2f",ab,cd,avg(ab,cd));

	printf("\n\nEnter number : ");
	scanf("%d",&e);

	sum = (float)factorial(e) + avg(ab,cd);

	printf("\nsum of %d and %.2f is %.2f",e,avg(ab,cd),sum);

getch();
}

