#include<stdio.h>
#include<conio.h>
void main()
{
	float a,b,c,x;
	clrscr();
	//a=250,b=85,c=25;
	//a=300,b=70,b=70;
	printf("Enter value of a : ");
	scanf("%f",&a);
	printf("Enter value of b : ");
	scanf("%f",&b);
	printf("Enter value of c : ");
	scanf("%f",&c);

	x=a/(b-c);
	printf("x=a/(b-c)\n =%.0f/(%.0f-%.0f)\n =%.2f",a,b,c,x);

getch();
}