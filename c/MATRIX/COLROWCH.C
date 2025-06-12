//Matrix Transpose
#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[50][50],arr2[50][50],row,col,i,j,k,count=0,sum=0;
	clrscr();

	printf("Enter size of row : ");
	scanf("%d",&row);
	printf("Enter size of col : ");
	scanf("%d",&col);

	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("Enter a%d%d : ",i+1,j+1);
			scanf("%d",&arr[i][j]);
		}
	}

	clrscr();

	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{

			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}

	printf("\n\n----------------------------------\n\n");

	for(i=0;i<col;i++)
	{
		for(j=0;j<row;j++)
		{
			arr2[i][j] = arr[j][i];
			printf("%d\t",arr2[i][j]);
		}
		printf("\n");
	}

getch();
}