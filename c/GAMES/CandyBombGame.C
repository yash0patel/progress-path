//in this game there are one candy and two bomb variable name as can1 and can2
//if candy(0) fall inside a bucket then score increase by one else do nothing
//if bomb(x) fall inside a bucket then lifeline decrease by one else do nothing
#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
	int canX=40,canY=2,can1X=20,can1Y=2,can2X=60,can2Y=2,boxX=37,boxY=22,i;
	int score=0,lifeline=4,d;
	char ch;
  //  	backgroundcolor(BLUE);

	start:
	clrscr();

	textcolor(12);
	gotoxy(60,5);
	cprintf("score = %d",score);
	gotoxy(60,6);
	cprintf("lifeline = %d",lifeline);
	gotoxy(60,7);
	cprintf("USE a or d for exit x");
	//can1X , can1Y
	gotoxy(can1X,can1Y);
	textcolor(RED);
	cprintf("x");
	//canX , canY
	gotoxy(canX,canY);
	textcolor(10);
	cprintf("0");
	//can2X , can2Y
	gotoxy(can2X,can2Y);
	textcolor(RED);
	cprintf("x");
	//boxX , boxY
	gotoxy(boxX,boxY);
	textcolor(2);
	cprintf("#");
	gotoxy(boxX+7,boxY);
	cprintf("#");
	gotoxy(boxX,boxY+1);
	cprintf("########");

	if(kbhit())
	{
		ch = getch();
		switch(ch)
		{
			case 'a' :
				if(boxX > 1)
				{
					boxX-=2;
				}
				else
				{
					textcolor(RED);
				}
				 break;
			case 'A' :
				if(boxX > 1)
				{
					boxX-=2;
				}
				else
				{
					textcolor(RED);
				}
				 break;
			case 'd' :boxX+=2;
				 break;
			case 'D' :boxX+=2;
				 break;
			case 'x' :exit(0);
		}

	}
	//canY
		canY++;
		if(canY==22)
		{
			d=canX-boxX;
			if(d>=1 && d<=8)
			{
				score++;
			}
			canY=2;
			for(i=1;i<10;i++)
			{
				canX = rand() % 20 + i;
			}
		}
	//can1Y
		if(can2Y%2==0)
		{
			can1Y++;
			if(can1Y%2==0)
			{
				can1X++;
			}
			else
			{
				can1X--;
			}
		}
		if(can1Y==22)
		{
			d=can1X-boxX;
			if(d>1 && d<8)
			{
				lifeline--;
				sound(200);
				delay(100);
				nosound();
				if(lifeline==0)
				{
					clrscr();
					gotoxy(35,13);
					textcolor(RED);
					sound(250);
					cprintf("GAME IS OVRE");
					delay(600);
					nosound();
					getch();
					exit(0);
				}
			}
			can1Y=2;
			for(i=1;i<10;i++)
			{
				can1X = rand() % 30 + i;
			}
		}
	//can2Y
		if(canY%2!=0 && canY>5)
		{
			can2Y++;
			if(can2Y%2==0)
			{
				can2X++;
			}
			else
			{
				can2X--;
			}
		}
		if(can2Y==22)
		{
			d=can2X-boxX;
			if(d>1 && d<8)
			{
				lifeline--;
				sound(200);
				delay(100);
				nosound();
				if(lifeline==0)
				{
					clrscr();
					gotoxy(35,13);
					textcolor(RED);
					sound(250);
					cprintf("GAME IS OVRE");
					delay(600);
					nosound();
					getch();
					exit(0);
				}
			}
			can2Y=2;
			for(i=1;i<10;i++)
			{
				can2X = rand() % 10 + i;
			}
		}
	delay(300);
	goto start;
}
