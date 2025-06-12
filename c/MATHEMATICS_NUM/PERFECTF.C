/* Displays all perfect numbers between the given range */
#include<stdio.h>
#include<conio.h>
int perfectnum(int n1,int n2)
{
	int i,j,sum;

	for(i=n1;i<=n2;i++)
	{
		sum=0;
		for(j=1;j<i;j++)
		{
			if(i%j == 0)
			{
				sum+=j;
			}
		}
		if(sum == i)
		{
			printf("%d\n",i);
		}
	}
return 0;
}

void main()
{
	int  n1,n2,i;
	clrscr();

	printf("Enter the lower limite number : ");
	scanf("%d",&n1);
	printf("Enter the upper limite number : ");
	scanf("%d",&n2);

	printf("perfect numbers between %d and %d :\n",n1,n2);
	perfectnum(n1,n2);
getch();
}