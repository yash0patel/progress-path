#include<stdio.h>
#include<conio.h>
void main()
{
	int x=0,y=0;
	short z=0;
	clrscr();

	x=123456;
	y=654321;
	z = x + y;

	printf("x = %d\n",x);
	printf("y = %d\n",y);
	printf("z = %d + %d = %d",x,y,z);


getch();
}