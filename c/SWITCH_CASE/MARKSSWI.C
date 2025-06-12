/* Program to input marks of 5 students and display marks based on student number input */
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d,e,num;
	clrscr();

	printf("Enter marks of student 1 : ");
	scanf("%d",&a);

	printf("Enter marks of student 2 : ");
	scanf("%d",&b);

	printf("Enter marks of student 3 : ");
	scanf("%d",&c);

	printf("Enter marks of student 4 : ");
	scanf("%d",&d);

	printf("Enter marks of student 5 : ");
	scanf("%d",&e);

	printf("Enter student number : ");
	scanf("%d",&num);

	switch(num)
	{

		case 1:printf("marks of student 1 is %d",a);
		       break;
		case 2:printf("marks of student 2 is %d",b);
		       break;
		case 3:printf("marks of student 3 is %d",c);
		       break;
		case 4:printf("marks of student 4 is %d",d);
		       break;
		case 5:printf("marks of student 5 is %d",e);
		       break;
		default:printf("invalid number");
	}

getch();
}