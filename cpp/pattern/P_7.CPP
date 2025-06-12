/* Program to print the first 15 prime numbers in a pattern */
#include<iostream.h>
#include<conio.h>
void main()
{
	int i,j,k,num=2,l,p_num=2,count=0,a=0;
	clrscr();


	for(i=0 ; i<5 ; i++)
	{
	cout<<i<<"- ";
		for(k=5-i ; k>=0 ; k--)
		{
			cout<<" ";
		}
		for(j=0 ; j<=i ; j++)
		{
			while(1)
			{
				count = 0;
				for(l=p_num;l<num;l++)
				{
					if(num % l == 0)
					{
						count++;
					}
				}
				if(count == 0)
				{
					p_num =  num;
					a++;
				}
				num++;

				if(a == 15)
				{
					break;
				}
			}
			cout<<p_num<<" ";
		}
		cout<<"\n";
	}
getch();
}