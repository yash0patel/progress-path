// Stores and displays marks and heights of 5 students
#include<stdio.h>
#include<conio.h>
void main()
{
	int s[5][2],i,j;
	clrscr();

	for(i=0;i<5;i++)
	{
		printf("Enter details of studant %d :\n",i+1);
		printf("\t\t\t\tMarks = ");
		scanf("%d",&s[i][0]);
		printf("\t\t\t\thight = ");
		scanf("%d",&s[i][1]);
	}
	printf("------------------------------------------\n");
	for(i=0;i<5;i++)
	{
	 printf("\t%d\t %d\n",s[i][0],s[i][1]);
	}
getch();
}