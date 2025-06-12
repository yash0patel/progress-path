/* 
   Generate and print the first 10 terms of an arithmetic progression
*/
#include<stdio.h>
#include<conio.h>
int apseries(int a,int d)
{
	int ap,i;
	ap=a;
	for(i=0;i<10;i++)
	{
		printf("%d, ",ap);
		ap+=d;
	}
return ap;
}

void main()
{
	int a,d,i;
	clrscr();

	printf("Enter first term : ");
	scanf("%d",&a);

	printf("Enter difference : ");
	scanf("%d",&d);

	printf("\nap =  ");
	apseries(a,d);
getch();
}