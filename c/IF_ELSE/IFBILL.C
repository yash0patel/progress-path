/* 
   Calculate electricity bill based on units consumed
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	float units,bill;
	clrscr();

	printf("Enter the units : ");
	scanf("%f",&units);

	if(units <= 50 && units >=0)
	{
		bill=units*0.50;
	}
	else if(units <= 150 && units >50)
	{
		units=units-50;
		bill=(units*0.75)+(50*0.50);
	}
	else if(units <= 250 && units >150)
	{
		units=units-150;
		bill=(units*1.20)+(100*0.75)+(50*0.50);
	}
	else if(units > 250)
	{
		units=units-250;
		bill=(units*1.50)+(100*1.20)+(100*0.75)+(50*0.50);
	}
	printf("Total bill = %f",bill);


getch();
}

