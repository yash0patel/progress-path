/* Program to convert seconds into hours, minutes, and seconds */
#include<stdio.h>
#include<conio.h>
void main()
{
	int sec,hours,minutes,seconds;
	clrscr();

	printf("Enter seconds : ");
	scanf("%d",&sec);

	hours = sec/3600;
	minutes = (sec-hours*3600)/60;
	seconds = (sec-hours*3600-minutes*60);
	printf("hours : minutes : seconds = %d : %d : %d",hours,minutes,seconds);


getch();
}