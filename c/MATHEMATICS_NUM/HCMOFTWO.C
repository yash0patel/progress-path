/* Finds and displays the HCF (Highest Common Factor) of two numbers */
#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n2,i,j,max=0;
	clrscr();

	printf("Enter number : ");
	scanf("%d",&n1);
	printf("Enter number : ");
	scanf("%d",&n2);

/*	for(i=1;i<=n1;i++)
	{
		for(j=1;j<=n2;j++)
		{
			if(n1%i==0 && n2%j==0)
			{
				if(i==j)
				{
					max=i;
				}
			}
		}
	}
*/

	for(i=1;i<=(n1<n2 ? n1:n2);i++)
	{
		if(n1%i == 0 && n2%i == 0)
		{
			max=i;
		}
	}
	printf("%d",max);
getch();
}