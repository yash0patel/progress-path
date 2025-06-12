#include<stdio.h>
#include<conio.h>
void main()
{
	int num;
	clrscr();

	printf("Enter number between 0 and 128 : ");
	scanf("%d",&num);

	if(num>=0 && num<=128)
	{
		printf("ASCII value of %d is %c",num,num);
	}
	else
	{
		printf("invalid number");
	}

getch();
}