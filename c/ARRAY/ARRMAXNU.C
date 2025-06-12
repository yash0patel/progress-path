/* 
Program to find the maximum number in an array of 5 integers.
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int num=0,arr[5],i;
	clrscr();

	for(i=0;i<5;i++)
	{
		printf("arr[%d] : ",i+1);
		scanf("%d",&arr[i]);
	}

	num=arr[0];
	for(i=1;i<5;i++)
	{
		if(num < arr[i])
		{
			num=arr[i];
		}
	}
	printf("maximum number is %d",num);

getch();
}