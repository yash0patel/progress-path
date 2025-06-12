// Adds corresponding elements of two arrays and displays the result
#include<stdio.h>
#include<conio.h>
void main(){
	int num1[5],num2[5],i,sum[5];
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("num1[%d] = ",i+1);
		scanf("%d",&num1[i]);
	}
	printf("\nand\n\n");
	for(i=0;i<5;i++)
	{
		printf("num2[%d] = ",i+1);
		scanf("%d",&num2[i]);
	}
		for(i=0;i<5;i++)
	{
	sum[i]=num1[i] + num2[i];
	}
	printf("[ ");
	for(i=0;i<4;i++)
	{
	 printf("%d, ",num1[i]);

	}
	printf("%d ] + [ ",num1[i]);
	for(i=0;i<4;i++)
	{
	 printf("%d, ",num2[i]);
	}
	printf("%d ] = [ ",num2[i]);
	for(i=0;i<4;i++)
	{
	 printf("%d, ",sum[i]);
	}
	printf("%d ]",sum[i]);

getch();
}