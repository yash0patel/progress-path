// Inserts an element at a specified position in an array
#include<stdio.h>
#include<conio.h>
void main()
{
	int xyz[50],xyz2[50],num,size,i,temp,position;
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
	printf("Enter element : ");
	scanf("%d",&num);

	for(i=size;i>=position;i--)
	{

		xyz[i]=xyz[i-1];
	}

	xyz[position] = num;

	for(i=0;i<size+1;i++)
	{
		printf("%d\t",xyz[i]);
	}

getch();
}