/* 
   Calculate the average of five numbers and the average of their factorials
*/
#include<stdio.h>
#include<conio.h>

float average(int a,int b,int c,int d,int e)
{
	float  avg;

	avg = (a+b+c+d+e)/2.0;

return avg;
}

int factorial(int num)
{
	int fact=1,i,j;
	for(i=1;i<=num;i++)
	{
		fact*=i;
	}
return fact;
}

void main()
{
	int num1,num2,num3,num4,num5,fact1,fact2,fact3,fact4,fact5;
	float avgnum,avgfact;
	clrscr();


		printf("Enter five  number : \n");
		scanf("%d%d%d%d%d",&num1,&num2,&num3,&num4,&num5);

		avgnum = average(num1,num2,num3,num4,num5);
		printf("average of numbers = %.2f",avgnum);

		fact1 = factorial(num1);
		fact2 = factorial(num2);
		fact3 = factorial(num3);
		fact4 = factorial(num4);
		fact5 = factorial(num5);

		avgfact = average(fact1,fact2,fact3,fact4,fact5);
		printf("\naverage of factorial : %.2f",avgfact);

getch();
}