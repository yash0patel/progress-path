//Find Maximum Element
#include<stdio.h>
#include<conio.h>
void main()
{
	int num=0,arr[3][3],i,j;
	clrscr();

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("arr[%d][%d] : ",i+1,j+1);
			scanf("%d",&arr[i][j]);
		}
	}
	clrscr();

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}


	num=arr[0][0];
	for(i=1;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		if(num < arr[i][j])
		{
			num=arr[i][j];
		}
		}
	}
	printf("\nmaximum number is %d",num);

getch();
}