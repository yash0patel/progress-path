// Merges two sorted arrays into a single sorted array
#include<stdio.h>
#include<conio.h>
void main()
{
	int xyz[50],abc[50],sho[50],size_1,size_2,i,position,a=0,b=0,c=0;
	clrscr();

	printf("Enter array size : ");
	scanf("%d",&size_1);

	for(i=0;i<size_1;i++)
	{
		printf("Enter xyz[%d] : ",i+1);
		scanf("%d",&xyz[i]);
	}

	printf("Enter array size : ");
	scanf("%d",&size_2);

	for(i=0;i<size_2;i++)
	{
		printf("Enter abc[%d] : ",i+1);
		scanf("%d",&abc[i]);
	}

	for(i=0;i<size_1 && i<size_2 ;i++)
	{
		if(xyz[a]<abc[b])
		{
			sho[c]=xyz[a];
			a++;
			c++;

		}
		else
		{
			sho[c]=abc[b];
			b++;
			c++;
		}
	}
	while(a<size_1)
	{
		sho[c++]=xyz[a++];
	}
	while(b<size_2)
	{
		sho[c++]=abc[b++];
	}

	printf("\n\n\n\n");

	for(i=0;i<size_1+size_2;i++)
	{
		printf("%d\t",sho[i]);
	}
getch();
}