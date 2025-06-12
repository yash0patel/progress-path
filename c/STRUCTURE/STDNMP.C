/* This program stores and displays the details (name, percentage, height) 
of two students using structures. */
#include<stdio.h>
#include<conio.h>
int main()
{
	struct student
	{
		char name[20];
		int percentage;
		float height;
	};
	struct student stu[2];
	int i;
//	clrscr();

	for(i=0;i<2;i++)
	{
		printf("\nEnter following details of student %d : \n",i+1);
		printf("name : ");
		fflush(stdin);
		scanf("%s",stu[i].name);

		printf("percentage : ");
		scanf("%d",&stu[i].percentage);

		printf("height : ");
		scanf("%f",&stu[i].height);
	}
getch();
}