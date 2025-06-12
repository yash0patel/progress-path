// Generating and displaying a pattern of prime numbers in a pyramid shape

#include<iostream>
using namespace std;

int main()
{
	int index=0,i,j,k,num=2,l,p_num[15],count=0,a=0;
	
	for(i=0 ; i<5 ; i++)
	{
	cout<<i<<"- ";
		for(k=5-i ; k>=0 ; k--)
		{
			cout<<" ";
		}
        p_num[0] = 2;
		for(j=0 ; j<=i ; j++)
		{
			while(a<15)
			{
				count = 0;
				for(l=2;l<num;l++)
				{
					if(num % l == 0)
					{
						count++;
                        break;
					}
				}
				if(count == 0)
				{
					p_num[a] =  num;
					a++;
				}
				num++;
            }
			cout<<p_num[index]<<" ";
            index++;
		}
		cout<<"\n";
	}
return 0;
}