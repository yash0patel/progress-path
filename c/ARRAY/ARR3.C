// Reverses the first half of an array and appends the second half in reverse order
#include<stdio.h>
#include<conio.h>
void main(){
	int num[10],temp[10],i;
	clrscr();
	printf("Enter 10 numbers\n");
	for(i=0;i<10;i++)
	{
		printf("num[%d] = ",i+1);
		scanf("%d",&num[i]);
	}
	for(i=0;i<5;i++)                   // 10,9,8,7,6,5
	{
		temp[i]=num[i];
		num[i]=num[9-i];
	}

		printf("[ ");
	for(i=0;i<5;i++)
	{
		printf("%d, ",num[i]);
	}
	for(i=5;i<10;i++)                  // 4,3,2,1
	{
		num[i]=temp[9-i];
	}
	for(i=5;i<9;i++)
	{
		printf("%d, ",num[i]);
	}
		printf("%d ]",num[i]);
getch();
}
