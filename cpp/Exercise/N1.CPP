/* Program to check if the sum and product of digits of a number are equal */
#include<iostream.h>
#include<conio.h>
void main()
{
	int multy=1,sum=0,num,temp;
	clrscr();

	cout<<"Enter integer : ";
	cin>>num;

	do{
		temp = num%10;
		multy *= temp;
		sum += temp;
		num = num/10;
	}while(num > 0);

	if(sum == multy)
	{
		cout<<"yes";
	}
	else
	{
		cout<<"no";
	}

getch();
}