/* 
   Determine the quadrant of a point based on its X and Y coordinates
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int coX,coY;
	clrscr();

	printf("Enter X coordinates : ");
	scanf("%d",&coX);

	printf("Enter Y coordinates : ");
	scanf("%d",&coY);

	if(coX == 0 || coY == 0)
	{
		printf("origin");
	}
	else if(coX > 0 && coY > 0)
	{
		printf("1st");
	}
	else if(coX < 0 && coY > 0)
	{
		printf("2nd");
	}
	else if(coX < 0 && coY < 0)
	{
		printf("3rd");
	}
	else if(coX > 0 && coY < 0)
	{
		printf("4th");
	}
getch();
}