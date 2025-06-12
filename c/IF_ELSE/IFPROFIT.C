/* 
   Calculate profit or loss based on cost price and selling price
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int cp,sp,profit;
	clrscr();

	printf("Enter cost price : ");
	scanf("%d",&cp);
	printf("Enter sell price : ");
	scanf("%d",&sp);

	profit=sp-cp;

	if(profit>0)
	{
		printf("profit is %d",profit);
	}
	else
	{
		printf("loss is %d",profit);
	}
getch();
}

