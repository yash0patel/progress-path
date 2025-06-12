/* Program to check whether a given number is prime or not */
#include<iostream.h>
#include<conio.h>
void main()
{
	int num,i,count=0;
	clrscr();

	cout<<"Enter number : ";
	cin>>num;

	for(i=2 ; i<num ; i++)
	{
		if(num%i == 0)
		{
			count++;
		}
	}

	if(count == 0)
	{
		cout<<num<<" is a prime";
	}
	else
	{
		cout<<num<<" is not a prime";
	}

getch();
}