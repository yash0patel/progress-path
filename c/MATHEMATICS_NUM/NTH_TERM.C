/* Calculates and displays the nth term of an arithmetic progression */
#include<stdio.h>
#include<conio.h>
int term(int a,int r,int n)
{
	int nth_term;
	nth_term = a + (n-1)*r;

return nth_term;
}

void main()
{
	int a,r,n,i;
	clrscr();

	printf("Enter first term : ");
	scanf("%d",&a);

	printf("Enter difference : ");
	scanf("%d",&r);

	printf("Enter n : ");
	scanf("%d",&n);

	printf("\nnth term =  %d",term(a,r,n));

getch();
}