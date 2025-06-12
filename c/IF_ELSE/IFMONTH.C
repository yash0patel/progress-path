/* 
   Determine the number of days in a given month based on its number
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int m;
	clrscr();

	printf("enter number of month");
	scanf("%d",&m);

	if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
	{
		printf("days in months : 31");
	}
	else if(m==2)
	{
		printf("days in months : 28 or 29");
	}
	else
	{
		printf("days n month : 30");
	}
getch();
}