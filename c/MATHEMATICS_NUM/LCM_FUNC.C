/* Finds and displays the LCM (Lowest Common Multiple) of two numbers */
#include<stdio.h>
#include<conio.h>
int lcm(int a,int b)
{
	int max,i;
	max=a>b?a:b;

	for(i=max;i<=a*b;i++)
	{
		if(i%a==0 && i%b==0)
		{
			return i;
		}
	}
}
void main()
{
	int n1,n2;
	clrscr();

	printf("Enter number : ");
	scanf("%d",&n1);
	printf("Enter number : ");
	scanf("%d",&n2);

	printf("\nlcm : %d",lcm(n1,n2));
getch();
}