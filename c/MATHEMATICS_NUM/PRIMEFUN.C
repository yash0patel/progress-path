/* Checks whether a given number is prime */
#include<stdio.h>
#include<conio.h>
int isprimenum(int n1)
{
	int i,count=0;

	for(i=2;i<=n1/2;i++)
	{
		if(n1%i == 0)
		{
			count++;
		}
	}

return count;
}

void main()
{
	int  n1;
	clrscr();

	printf("Enter number : ");
	scanf("%d",&n1);

	if(isprimenum(n1) == 0 && n1>1)
	{
		printf("prime");
	}
	else
	{
		printf("not prime");
	}
getch();
}