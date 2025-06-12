#include<stdio.h>
#include<conio.h>
void main()
{
	float rice,sugar;
	clrscr();

	printf("Enter price of one kg rice : ");
	scanf("%f",&rice);
	printf("Enter price of one kg sugar : ");
	scanf("%f",&sugar);

	clrscr();

	printf("***LIST OF ITEMS***\n");
	printf("Item\tprice");
	printf("\n----\t-----");
	printf("\nRice\tRs %.2f",rice);
	printf("\nSugar\tRs %.2f",sugar);

getch();
}