/* Finds and displays the LCM (Lowest Common Multiple) of two numbers */
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int n1,n2,i=0;
	clrscr();

	printf("Enter number : ");
	scanf("%d",&n1);
	printf("Enter number : ");
	scanf("%d",&n2);

	max=n1>n2?n1:n2;

	for(i=max;i<=n1*n2;i++)
	{
		if(i%n1==0 && i%n2==0)
		{
			break;
		}
	}
	printf("lcm = %d",i);

getch();
}