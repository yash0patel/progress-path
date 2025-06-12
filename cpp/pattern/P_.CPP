/* Program to print different patterns using nested loops */
#include<iostream.h>
#include<conio.h>
void main()
{
	int i,j,k=1;
	clrscr();

	for(i=0;i<5;i++)
	{
		for(j=0;j<=i;j++)
		{
			cout<<j+1;
		}
		cout<<"\n";
	}

	cout<<"\n------------------------------------\n\n";

	for(i=0;i<5;i++)
	{
		for(j=0;j<=i;j++)
		{
			cout<<i+1;
		}
		cout<<"\n";
	}

	cout<<"\n------------------------------------\n\n";

	for(i=0;i<5;i++)
	{
		for(j=0;j<=i;j++)
		{
			cout<<k;
			k++;
		}
		cout<<"\n";
	}
getch();
}