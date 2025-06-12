/* Program to find the maximum of four integers */
#include<stdio.h>
#include<conio.h>
int maxnum(int a,int b,int c,int d)
{
	int max;

	max=a>b?a:b;
	max=c>max?c:max;
	max=d>max?d:max;

return max;
}

void main()
{
	int a,b,c,d;
	clrscr();

	printf("Enter four integer : \n");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	printf("\nMaximum number is %d",maxnum(a,b,c,d));
getch();
}