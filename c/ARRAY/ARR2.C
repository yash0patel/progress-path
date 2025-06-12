// Computes the sum of two arrays based on user input
#include<stdio.h>
#include<conio.h>
void main(){
	int num1[5],num2[5],i,sum=0,a;
	clrscr();
	printf("enter how many number you want =  : \n");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		printf("num1[%d] = ",i);
		scanf("%d",&num1[i]);
	}
	printf("\nand\n\n");
	for(i=1;i<=a;i++)
	{
		printf("num2[%d] = ",i);
		scanf("%d",&num2[i]);
	}
	for(i=1;i<=a;i++)
	{
	sum=sum + num1[i];
	sum=sum + num2[i];
	}
	printf("sum of num[%d]= %d",a,sum);

getch();
}
