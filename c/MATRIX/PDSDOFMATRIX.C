//Sum-of-Primary-and-Secondary-Diagonal
#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[50][50],a,i,j,sumpd=0,sumsd=0;
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

	printf("\n\nPD :\t");
	for(i=0;i<a;i++)
	{
		printf("%d\t",arr[i][i]);
		sumpd+=arr[i][i];
	}
	printf("sum = %d",sumpd);

	printf("\n\nSD :\t");
	for(i=0;i<a;i++)
	{
		   printf("%d\t",arr[i][a-i-1]);
		   sumsd+=arr[i][a-i-1];
	}
	printf("sum = %d",sumsd);

getch();
}