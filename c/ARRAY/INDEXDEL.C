/* Program to remove an element from an array at a specified index */
#include<stdio.h>
#include<conio.h>
void main()
{
	int xyz[50],size,i,position;
	clrscr();

	printf("Enter array size : ");
	scanf("%d",&size);

	for(i=0;i<size;i++)
	{
		printf("Enter xyz[%d] : ",i+1);
		scanf("%d",&xyz[i]);
	}

	printf("Index number : ");
	scanf("%d",&position);

	for(i=position;i<size;i++)
	{
		xyz[i] = xyz[i+1];
	}

	for(i=0;i<size-1;i++)
	{
		printf("%d\t",xyz[i]);
	}

getch();
}