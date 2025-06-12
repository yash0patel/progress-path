// Retrieves a specific student's mark for a chosen subject
#include<stdio.h>
#include<conio.h>
void main()
{
	int marks[5][3],j,i,student,subject;
	clrscr();

	printf("enter marks scord by student\n");
	for(i=0;i<5;i++)
	{
		printf("enter student %d marks : \n",i+1);
		for(j=0;j<3;j++)
		{
			printf("subject %d : ",j+1);
			scanf("%d",&marks[i][j]);
		}
	}

	printf("Enter number(1-5) of student : ");
	scanf("%d",&student);
	printf("Enter number(1-3) of subject : ");
	scanf("%d",&subject);

	printf("student %d marks in subject %d : %d\n",student,subject,marks[student-1][subject-1]);

getch();
}