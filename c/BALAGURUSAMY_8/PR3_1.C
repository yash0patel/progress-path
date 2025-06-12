#include<stdio.h>
#include<conio.h>
void main()
{
	float num,i,sum=1;
	clrscr();

	printf("Enter number : ");
	scanf("%f",&num);

	for(i=1;i<num;i++)
	{
		sum=sum+(1/(i+1));
		printf("1/%.0f + ",i);
	}
	printf("1/%.0f = %.2f",num,sum);
getch();
}