/* 
   in this game the player moves a box to catch falling objects and earn points
*/
#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main(){
	int caX=40,caY=2,boxX=37,boxY=22,i;
	int score=0,lifeline=3,d;
	char ch;
  //  	backgroundcolor(BLUE);

	start:
	clrscr();

	textcolor(12);
	gotoxy(60,5);
	cprintf("score = %d",score);
	gotoxy(60,6);
	cprintf("lifeline = %d",lifeline);
	gotoxy(caX,caY);
	textcolor(10);
	cprintf("0");
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
			case 'a' :boxX--;
				 break;
			case 'A' :boxX--;
				 break;
			case 'd' :boxX++;
				 break;
			case 'D' :boxX++;
				 break;
			case 'x' :exit(0);
		}

	}
		caY++;
		if(caY==22)
		{
			d=caX-boxX;
			if(d>=1 && d<=6)
			{
				score++;
			}
			else
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
			caY=2;
			for(i=1;i<10;i++)
			{
				caX = rand() % 20 + i;
			}
		}
	delay(200);
	goto start;
}