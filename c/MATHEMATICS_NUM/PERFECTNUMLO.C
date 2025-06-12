/* Finds and displays all perfect numbers between the given range */
#include<stdio.h>
#include<conio.h>
void main()
{
     int n1,n2,a,i,j,sum;
     clrscr();

     printf("Enter the lower limite number : ");
     scanf("%d",&n1);
     printf("Enter the upper limite number : ");
     scanf("%d",&n2);

     for(i=n1;i<=n2;i++)
     {
		sum=0;
		for(j=1;j<i;j++)
		{
			if(i%j==0)
			{
				sum=sum+j;
			}
		}
			//printe
		if(sum==i)
		{
			printf("%d is perfect number\n",i);
		}
     }
getch();
}