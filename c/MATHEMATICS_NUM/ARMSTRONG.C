/* 
   Check if a number is an Armstrong number
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,k=0,i=0,j=0;
	clrscr();
	printf("Enter number : ");
	scanf("%d",&n1);
	k=n1;
	while(n1>0)
	{
		i=n1%10;
		n1=n1/10;
		j=j+(i*i*i);

	}
	if(k==j)
	{
		printf("%d is armstrong",k);
	}
	else
	{
		printf("%d is not armstrong",k);
	}
getch();
}
