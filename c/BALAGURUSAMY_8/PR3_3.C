#include<stdio.h>
#include<conio.h>
void main()
{
	int num,i,pov=0,neg=0;
	clrscr();

	printf("Enter numbers : \n");
	while(1)
	{
		scanf("%d",&num);
		if(num==0)
		{
			break;
		}
		if(num<0)
		{
			neg++;
		}
		else
		{
			pov++;
		}
	}
	printf("\npositive : %d\nnegative : %d",pov,neg);

getch();
}