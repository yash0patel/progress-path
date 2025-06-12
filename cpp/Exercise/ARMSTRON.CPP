/* Program to check if a number is an Armstrong number */
#include<iostream.h>
#include<conio.h>
void main()
{
	int i,num,temp,real_num,sum=0;
	clrscr();

	cout<<"Enter integer : ";
	cin>>num;
	real_num = num;
	while(num > 0)
	{
		temp = num%10;
		sum = sum + (temp * temp * temp);
		num = num/10;
	}

	if(sum == real_num)
	{
		cout<<real_num<<" is armstrong";
	}
	else
	{
		cout<<real_num<<"is not armstrong";
	}
getch();
}