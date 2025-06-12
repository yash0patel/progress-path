/* Converts a decimal number to binary and displays the result */
#include<stdio.h>
#include<conio.h>
int dec_to_bin(int c)
{
	int binary = 0 ,temp, i = 1;
	while(c>0)
	{
		temp = c%2;
		c = c/2;
		binary += temp*i;
		i*=10;
	}
return binary;
}
void main()
{
	int num;
	clrscr();

	printf("Enter number : ");
	scanf("%d",&num);

	printf("%d",dec_to_bin(num));

getch();
}