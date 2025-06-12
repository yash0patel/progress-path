#include<stdio.h>
#include<conio.h>
void main()
{
	float distance,time,speed;
	clrscr();

	printf("Enter distanse(km) travelled by a car : ");
	scanf("%f",&distance);
	printf("Enter time(hr) : ");
	scanf("%f",&time);


	speed=distance/time;
	printf("speed : %.2fkm/hr",speed);
getch();
}