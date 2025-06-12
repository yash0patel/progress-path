// Calculates the sum of 5 user-input integers
#include<stdio.h>
#include<conio.h>
void main(){
	int num[5],i,sum=0;
	clrscr();
		printf("Enter 5 number\n");
			for(i=1;i<=5;i++)
			{
			printf("num[%d] = ",i);
			scanf("%d",&num[i]);
			}
		printf("----------");
		printf("\nsum = ");

		for(i=1;i<=5;i++)
		{
			sum=sum + num[i];
		}
		printf("%d",sum);
getch();
}