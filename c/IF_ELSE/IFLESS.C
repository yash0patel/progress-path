/* 
   Check if a number is divisible by both 3 and 11
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n2,n3;
	clrscr();

	printf("Enter number 1 : ");
	scanf("%d",&n1);
/*	printf("Enter number 2 : ");
	scanf("%d",&n2);
	printf("Enter number 3 : ");
	scanf("%d",&n3);
*/
 /*
	if(n1<n2)
	{
		printf("%d is less than",n1);
	}
	else
	{
		printf("%d is less than",n2);

	}
*/

/*	// largest number
	if(n1>n2 && n2>n3)
	{
		printf("%d is largest number",n1);
	}
	else if(n2>n1 && n2>n3)
	{
		printf("%d is largest number",n2);
	}
	else
	{
		printf("%d is largest number",n3);

	}
*/
	//3
/*	if(n1%7==0)
	{
		printf("%d is divisiable by 7",n1);
	}
	else
	{
		printf("%d is not divisiable by 7",n1);
	}
*/
	if(n1%3==0 && n1%11==0)
	{
		printf("%d is divisiable by 3 and 11 ",n1);
	}
	else
	{
		printf("%d is not divisiable by 3 and 11",n1);
	}

getch();
}