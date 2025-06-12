/* 
Program to count the frequency of each element in an array.
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[10],i,m,j,k=0;
	clrscr();

	for(i=0;i<10;i++)
	{
		printf("Enetr %d number : ",i+1);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<10;i++)
	{
		k=1;
		for(j=0;j<10;j++)
		{
			if(i != j)
			{
				if(arr[i] == arr[j])
				{
					k++;
					arr[j] = 0;
				}
			}
		}
		if(arr[i] != 0)
		{
			printf("%d = %d\n",arr[i],k);
		}
	}

getch();
}