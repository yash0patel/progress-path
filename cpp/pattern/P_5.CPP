/* Program to print various patterns with a combination of spaces and stars */
#include<iostream.h>
#include<conio.h>
void main()
{
	int i,j,k=1;
	clrscr();

	for(i=5 ; i>=0 ; i--)
	{
		cout<<i<<"- ";
		for(j=0 ; j<=i ; j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}

	cout<<"\n\n-----------------------------------------\n\n";

	for(i=5 ; i>=0 ; i--)
	{
		cout<<i<<"- ";
		for(k=5-i ; k>=0 ; k--)
		{
			cout<<" ";
		}
		for(j=0 ; j<=i ; j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}

	cout<<"\n\n-----------------------------------------\n\n";

	for(i=5 ; i>=0 ; i--)
	{
		cout<<i<<"- ";
		for(k=5-i ; k>=0 ; k--)
		{
			cout<<" ";
		}
		for(j=0 ; j<=i ; j++)
		{
			cout<<"* ";
		}
		cout<<"\n";
	}

	cout<<"\n\n-----------------------------------------\n\n";

	for(i=0 ; i<5 ; i++)
	{
	cout<<i<<"- ";
		for(k=5-i ; k>=0 ; k--)
		{
			cout<<" ";
		}
		for(j=0 ; j<=i ; j++)
		{
			cout<<"* ";
		}
		cout<<"\n";
	}

	for(i=5 ; i>=0 ; i--)
	{
	cout<<i<<"- ";
		for(k=5-i ; k>=0 ; k--)
		{
			cout<<" ";
		}
		for(j=0 ; j<=i ; j++)
		{
			cout<<"* ";
		}
		cout<<"\n";
	}

	cout<<"\n\n-----------------------------------------\n\n";
 getch();
 }