/* Program to display different patterns using numbers in a triangular form */

#include<iostream.h>
#include<conio.h>
void main()
{
	int i,j,k=1;
	clrscr();

	for(i=0 ; i<5 ; i++)
	{
	cout<<i<<"- ";
		for(j=0 ; j<=i ; j++)
		{
			cout<<i+1<<" ";
		}
		cout<<"\n";
	}

	cout<<"\n\n-----------------------------------------\n\n";

	for(i=0 ; i<5 ; i++)
	{
	cout<<i<<"- ";
		for(j=0 ; j<=i ; j++)
		{
			cout<<j+1<<" ";
		}
		cout<<"\n";
	}

	cout<<"\n\n-----------------------------------------\n\n";

	for(i=0 ; i<5 ; i++)
	{
	cout<<i<<"- ";
		for(j=0 ; j<=i ; j++)
		{
			cout<<k<<" ";
			k++;
		}
		cout<<"\n";
	}
getch();
}