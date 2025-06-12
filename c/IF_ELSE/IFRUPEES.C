/* 
   Calculate the minimum number of currency notes/coins for a given amount
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int rup,a2000=0,a1000=0,a500=0,a200=0,a100=0,a50=0,a20=0,a10=0,a5=0,a1=0;
	clrscr();

	printf("Enter amount : ");
	scanf("%d",&rup);

	if(rup>=2000)
	{
		a2000=rup/2000;
		rup=rup-(a2000*2000);
		printf("2000 - %d",a2000);
	}
	if(rup>=1000)
	{
		a1000=rup/1000;
		rup=rup-(a1000*1000);
		printf("\n1000 - %d",a1000);
	}
	if(rup>=500)
	{
		a500=rup/500;
		rup=rup-(a500*500);
		printf("\n500 - %d",a500);
	}
	if(rup>=200)
	{
		a200=rup/200;
		rup=rup-(a200*200);
		printf("\n200 - %d",a200);
	}
	if(rup>=100)
	{
		a200=rup/100;
		rup=rup-(a100*100);
		printf("\n100 - %d",a100);
	}
	if(rup>=50)
	{
		a50=rup/50;
		rup=rup-(a50*50);
		printf("\n50 - %d",a50);
	}
	if(rup>=20)
	{
		a20=rup/20;
		rup=rup-(a20*20);
		printf("\n20 - %d",a20);
	}
	if(rup>=10)
	{
		a10=rup/10;
		rup=rup-(a10*10);
		printf("\n10 - %d",a10);
	}
	if(rup>=1)
	{
		a1=rup;
		printf("\n1 - %d",a1);
	}




getch();
}