/* 
   Program to find and display the unique elements in an array of 10 numbers
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[10],i,j,k=0;
	clrscr();

	printf("First name : \n");
	for(i=0;i<10;i++)
	{
		printf("Enter number arr[%d] : ",i+1);
		scanf("%d",&arr[i]);
	}

	for(i=0;i<10;i++)
	{
		k=0;
		for(j=0;j<10;j++)
		{
			if(i != j)
			{
				if(arr[i] == arr[j])
				{
					k++;
				}
			}
		}
		if(k == 0)
		{
			printf("%d\t",arr[i]);
		}
	}
getch();
}