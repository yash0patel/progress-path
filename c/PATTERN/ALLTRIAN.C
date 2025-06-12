/* Program to print half or inverted half triangle patterns based on user input */
#include<stdio.h>
#include<conio.h>
void main(){
	int h,i,j,k,l,loop,a;
	char ch;
	clrscr();
	printf("Enter cheracter : ");
		scanf("%c",&ch);
	printf("how many traingle you need : ");
		scanf("%d",&a);
	printf("Enter lengh : ");
		scanf("%d",&l);
	printf("which triangle you need to printe : \n 1-> half triangle \n 2-> inverted half triangle  \n slected : ");
		scanf("%d",&h);

	      //half triangle
if(h==1)
 {
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
 }
	      //inverted half triangle
if(h==2)
 {
	for(k=1;k<=a;k++)
	{
		for(i=l;i>0;i--)
		{
			for(j=1;j<=i;j++)
			{
				printf("%c",ch);
			}
			printf("\n");
		}
		printf("\n");

	}
 }
	      //non of abouv
else
 {
	printf("\nError");
 }

getch();
}