/* Calculates and displays the HCF (Highest Common Factor) of two numbers */
#include<stdio.h>
#include<conio.h>
int hcf(int a,int b)
{
	int i,hcf=1;
	for(i=1; i<=a && i<=b; i++)
	{
		if(a%i == 0 && b%i == 0)
		{
			hcf = i;
		}
	}
return hcf;
}
void main()
{
	int n1,n2;
	clrscr();

	printf("Enter two number : ");
	scanf("%d%d",&n1,&n2);

	printf("hcf = %d",hcf(n1,n2));

getch();
}