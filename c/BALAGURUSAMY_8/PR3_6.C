#include<stdio.h>
#include<conio.h>
#define PI 3.14
void main()
{
	float area,redius;
	clrscr();

	printf("Enter redius : ");
	scanf("%f",&redius);

	area = PI*redius*redius;

	printf("area = %.2f",area);

getch();
}