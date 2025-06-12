/* Simple calculator program to perform basic arithmetic operations (+, -, *, /, %) on two numbers */
#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n2,result;
	char ch;
	clrscr();

	printf("Enter number 1 : ");
	scanf("%d",&n1);

	printf("Enter number 2 : ");
	scanf("%d",&n2);

	printf("Enter any of (+ , - , * , / , %) : ");
	fflush(stdin);
	scanf("%c",&ch);

	switch(ch)
	{
		case '+': result = n1 + n2;
			printf("%d + %d = %d",n1,n2,result);
			break;
		case '-': result = n1 - n2;
			printf("%d - %d = %d",n1,n2,result);
			break;
		case '*': result = n1 * n2;
			printf("%d * %d = %d",n1,n2,result);
			break;
		case '/': result = n1 / n2;
			printf("%d / %d = %d",n1,n2,result);
			break;
		case '%': result = n1 % n2;
			printf("%d % %d = %d",n1,n2,result);
			break;
		default:printf("invalid symbol");
	}

getch();
}