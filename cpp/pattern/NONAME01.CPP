/* This program prints a pattern of numbers followed by stars in decreasing order. */
#include<iostream.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();

	for(i=5 ; i>0 ; i--)
	{
		cout<<i+1<<" ";
		for(j=5 ;j>i ; j--)
		{
			cout<<"* ";
		}
		cout<<"\n";
	}

getch();
}