/* 
   Print the day of the week based on the input number (1 to 7)
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	clrscr();

	printf("enter number :  ");
	scanf("%d",&n);

	if(n==1)
	{
		printf("sunday");
	}
	if(n==2)
	{
		printf("monday");
	}
	if(n==3)
	{
		printf("tusday");
	}
	if(n==4)
	{
		printf("wensday");
	}
	if(n==5)
	{
		printf("thusday");
	}
	if(n==6)
	{
		printf("friday");
	}
	if(n==7)
	{
		printf("saterday");
	}
getch();
}