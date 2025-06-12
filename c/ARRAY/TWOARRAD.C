/* 
   Program to add corresponding elements of two arrays and display the sum
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int arr1[5],arr2[5],sum[5],i;
	clrscr();

	printf("First name : \n");
	for(i=0;i<5;i++)
	{
		printf("Enter number arr1[%d] : ",i+1);
		scanf("%d",&arr1[i]);
	}
	printf("\nSecond array : \n");
	for(i=0;i<5;i++)
	{
		printf("Enter number arr2[%d] : ",i+1);
		scanf("%d",&arr2[i]);
	}
	for(i=0;i<5;i++)
	{
		sum[i] = arr1[i] + arr2[i];
		printf("%d\t",sum[i]);
	}





getch();
}