/* 
   Golf scoring program to classify strokes relative to par
*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int par,strokes;
	clrscr();

	printf("Enter par : ");
	scanf("%d",&par);

	printf("Enter strokes : ");
	scanf("%d",&strokes);

	if(strokes == par)
	{
		printf("PAR");
	}
	else if(strokes == par-1 || strokes == par-2)
	{
		printf("BIRDY");
	}
	else if(strokes == 1)
	{
		printf("HOLE IN ONE");
	}
	else if(strokes == par+1 || strokes == par+2)
	{
		printf("BOGY");
	}
	else if(strokes == par+3)
	{
		printf("DOUBLE BOGY");
	}
	else if(strokes > par+3)
	{
		printf("GO HOME");
	}
	else if(strokes == 0)
	{
		printf("ERROR");
	}
	else
	{
		printf("EAGLE");
	}
getch();
}