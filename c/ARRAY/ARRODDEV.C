/* Program to separate even and odd numbers from an array */
#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[10],odd[10],j=0,even[10],i;
	clrscr();

	for(i=0;i<10;i++)
	{
		printf("arr[%d] : ",i+1);
		scanf("%d",&arr[i]);
	}

	//even
	for(i=0;i<10;i++)
	{
		if(arr[i]%2 == 0 && arr[i] != 0)
		{
				even[j]=arr[i];
				j++;
		}
	}

	printf("even : ");
	for(i=0;i<j;i++)
	{
		printf("%d\t",even[i]);
	}

	//odd
	j=0;
	for(i=0;i<10;i++)
	{
		if(arr[i]%2 != 0)
		{
			odd[j]=arr[i];
			j++;
		}
	}

	printf("\nodd : ");
	for(i=0;i<j;i++)
	{
		printf("%d\t",odd[i]);
	}

getch();
}