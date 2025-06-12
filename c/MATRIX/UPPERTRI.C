//Upper Triangular Checker
#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[50][50],a,i,j,count=0
	;
	clrscr();

	printf("Enter size of array : ");
	scanf("%d",&a);

	for(i=0;i<a;i++)
	{
		for(j=0;j<a;j++)
		{
			printf("Enter a%d%d : ",i+1,j+1);
			scanf("%d",&arr[i][j]);
		}
	}

	clrscr();

	for(i=0;i<a;i++)
	{
		for(j=0;j<a;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}

	for(i=0;i<a;i++)
	{
		for(j=0;j<a;j++)
		{
			if(arr[i][j] != 0 && j<i)
			{
				count=1;
				break;
			}
		}
	}

	if(count == 1)
	{
		printf("not upper triangular");
	}
	else
	{
		printf("upper triangular");
	}
getch();
}