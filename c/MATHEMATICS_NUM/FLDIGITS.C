/* Extracts and displays the first and last digit of a given number */
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int n1,n2,i;
	clrscr();
	printf("Enter number : ");
	scanf("%d",&n1);
	n2=n1;
	while(n2>9)
	{
		n2=n2/10;
		i++;
	}
	printf("first digit = %d \n last digit = %d",n2,n1%10);

getch();
}