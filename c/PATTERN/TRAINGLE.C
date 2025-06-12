/* Program to print multiple half triangle patterns using a specified character */
#include<stdio.h>
#include<conio.h>
void main(){
	int i,j,k,a,l;
	char ch;
	clrscr();
	printf("Enter cheracter : ");
	scanf("%c",&ch);
	printf("how many traingle you need : ");
	scanf("%d",&a);
	printf("Enter lengh : ");
	scanf("%d",&l);
	for(k=1;k<=a;k++)
	{
		for(i=1;i<=l;i++)
		{
			for(j=1;j<=i;j++)
			{
				printf("%c",ch);
			}
			printf("\n");
		}
		printf("\n");
	}
getch();
}