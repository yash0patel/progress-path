// tASK
#include<stdio.h>
#include<conio.h>
// main
void main()
{
	int a = 1, x = 5;
	float b = 1.1 , c = 5,sum;
	char ch = 'o';
	clrscr();
	printf("a : %d\n",a);
	printf("b : %.2f\tc = %.0f\n",b,c);
	printf("ch = %c\n",ch);
      //	printf("sum = %d\n",sum);
	//(float)
	sum = (float)a + b + x;
	printf("sum = %.2f",sum);
	getch();
}//end main
