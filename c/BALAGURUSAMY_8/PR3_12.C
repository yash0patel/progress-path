#include<stdio.h>
#include<conio.h>
void main()
{
	int amount,amt_2000,amt_500,amt_200,amt_100,amt_50,amt_20,amt_10,amt_5,amt_2,amt_1;
	clrscr();

	printf("Enter amount value : ");
	scanf("%d",&amount);

	amt_2000 = amount/2000;
	amount = amount % 2000;
	amt_500 = amount/500;
	amount = amount % 500;
	amt_200 = amount/200;
	amount = amount % 200;
	amt_100 = amount/100;
	amount = amount % 100;
	amt_50 = amount/50;
	amount = amount % 50;
	amt_20 = amount/20;
	amount = amount % 20;
	amt_10 = amount/10;
	amount = amount % 10;
	amt_5 = amount/5;
	amount = amount % 5;
	amt_2 = amount/2;
	amount = amount % 2;
	amt_1 = amount/1;

	printf("\ncurrency\tusec\t\ttotal amount");
	printf("\n--------\t----\t\t------------");

	printf("\n2000\tx\t%d\t=\t%d",amt_2000,2000*amt_2000);
	printf("\n500\tx\t%d\t=\t%d",amt_500,500*amt_500);
	printf("\n200\tx\t%d\t=\t%d",amt_200,200*amt_200);
	printf("\n100\tx\t%d\t=\t%d",amt_100,100*amt_100);
	printf("\n50\tx\t%d\t=\t%d",amt_50,50*amt_50);
	printf("\n20\tx\t%d\t=\t%d",amt_20,20*amt_20);
	printf("\n10\tx\t%d\t=\t%d",amt_10,10*amt_10);
	printf("\n5\tx\t%d\t=\t%d",amt_5,5*amt_5);
	printf("\n2\tx\t%d\t=\t%d",amt_2,2*amt_2);
	printf("\n1\tx\t%d\t=\t%d",amt_1,1*amt_1);

getch();
}