#include<stdio.h>
#include<conio.h>
void main()
{
	float distance,fuel,mileage;
	clrscr();

	printf("Enter distance(km) travelled by a car : ");
	scanf("%f",&distance);
	printf("Enter the fuel(lit) consumed by a car : ");
	scanf("%f",&fuel);

	mileage = distance/fuel;

	printf("mileage = %.4f",mileage);

getch();
}