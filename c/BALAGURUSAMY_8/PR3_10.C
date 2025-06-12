#include<stdio.h>
#include<conio.h>
void main()
{
	int days,year,week,remaining_days;
	clrscr();

	printf("Enetr number of days : ");
	scanf("%d",&days);

	year = days/365;
	remaining_days = days % 365;
	week = remaining_days/7;
	remaining_days = remaining_days % 7;

	printf("year = %d\nweek = %d\ndays = %d",year,week,remaining_days);
getch();
}