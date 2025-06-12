/* Finds and displays all prime numbers between two given numbers */
#include<stdio.h>
#include<conio.h>
int primenum(int n1,int n2)
{
	int i,j,count,min;
	min = n1<n2?n1:n2;
	for(i=min;i<=n2 || i<=n1;i++)
	{
		count=0;
		for(j=2;j<=i;j++)
		{
			if(i%j == 0)
			{
				count++;
			}
		}
		if(count == 1)
		{
			printf("%d\n",i);
		}
	}
//return 0;
}

void main()
{
	int  n1,n2,i;
	clrscr();

	printf("Enter the lower limite number : ");
	scanf("%d",&n1);
	printf("Enter the upper limite number : ");
	scanf("%d",&n2);

	printf("prime numbers between %d and %d :\n",n1,n2);
	primenum(n1,n2);
getch();
}