/* 
   Find the second smallest number from input numbers
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int num[5],k,i,j;
	clrscr();

	for(i=0;i<5;i++)
	{
		printf("Enter %d number : ",i+1);
		scanf("%d",&num[i]);
	}

	j=num[0];
	k=num[0];
	for(i=0;i<5;i++)
	{
		if(num[i] < j)
		{
			j=num[i];
		}
	}
	for(i=0;i<5;i++)
	{
		if(num[i] < k && num[i] != j)
		{
			k=num[i];
		}
	}
	printf("second smallest number is %d",k);
getch();
}