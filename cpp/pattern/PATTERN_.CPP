/* Program to display a pattern of numbers where each row contains numbers from 1 to 5 */
#include<iostream.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();

	for(i=0 ; i<5 ; i++)
	{
		cout<<i+1<<" - ";
		for(j=0 ;j<5 ; j++)
		{
			cout<<j+1<<" ";
		}
		cout<<"\n";
	}

getch();
}