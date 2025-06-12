/* Program to implement Bubble Sort with intermediate steps shown */
#include<stdio.h>
#include<conio.h>
void main()
{
	int xyz[50],size_1,temp,i,j,swap,k;
	clrscr();

	printf("Enter array size : ");
	scanf("%d",&size_1);

	for(i=0;i<size_1;i++)
	{
		printf("Enter xyz[%d] : ",i+1);
		scanf("%d",&xyz[i]);
	}

	for(j=0;j<size_1;j++)
	{
		swap=0;
		printf("\npath %d : \n",j+1);
		for(i=0;i<size_1-j-1;i++)
		{
			if(xyz[i]>xyz[i+1])
			{
				temp = xyz[i];
				xyz[i] = xyz[i+1];
				xyz[i+1] = temp;
				swap = 1;
			}
			for(k=0;k<size_1;k++)
			{
					printf("%d\t",xyz[k]);
			}
			printf("\n");
		}
		if(swap == 0)
		{
			break;
		}
	}

	for(i=0;i<size_1;i++)
	{
		printf("%d\n",xyz[i]);
	}

getch();
}