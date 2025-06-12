/* 
   Identify if the input is a character, number, or special character
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	clrscr();

	printf("Enter character : ");
	scanf("%c",&ch);

/*	if(ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch=='u' || ch=='U')
	{
		printf("%c is vowel",ch);
	}
	else
	{
		printf("%c is consonant",ch);
	}
*/
	if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
	{
		printf("%c is character",ch);
	}
	else if(ch>='0' && ch<='9')
	{
		printf("%c is number",ch);
	}
	else
	{
		printf("%c is special character",ch);
	}
getch();
}