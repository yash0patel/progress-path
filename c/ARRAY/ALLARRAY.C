// Demonstrates array operations in single, two, and three dimensions
#include<stdio.h>
#include<conio.h>

void main()
{
	int a1[5],a2[3][3],a3[3][3][3],i,j,k,choice;

	while(1)
	{
	clrscr();
	printf("1 - single dimantion\n");
	printf("2 - two dimantion\n");
	printf("3 - three dimantion\n");
	printf("0 - exit\n");

	printf("Enter the choice : ");
	scanf("%d",&choice);

	switch(choice)
		{
		 case 1: printf("single dimation");
			 for(i=0;i<5;i++)
			 {
				printf("\nEnter the value a1[%d] = ",i+1);
				scanf("%d",&a1[i]);
			 }
			 printf("singel dimation array :\n");
			 for(i=0;i<5;i++)
			 {
				printf("%d\t",a1[i]);
			 }
			 break;

		  case 2: printf("two dimation");
			 for(i=0;i<3;i++)
			 {
				for(j=0;j<3;j++)
				{
					printf("\nEnter the value a2[%d][%d] = ",i+1,j+1);
					scanf("%d",&a2[i][j]);
				}
			 }
			 printf("two dimation array :\n");
			 for(i=0;i<3;i++)
			 {
				for(j=0;j<3;j++)
				{
					printf("%d\t",a2[i][j]);
				}
				printf("\n");
			 }
			 break;
		  case 3: printf("three dimation");
			 for(i=0;i<3;i++)
			 {
				for(j=0;j<3;j++)
				{
					for(k=0;k<3;k++)
					{
						printf("\nEnter the value a3[%d][%d][%d] = ",i+1,j+1,k+1);
						scanf("%d",&a3[i][j][k]);
					}
				}
			 }
			 printf("three dimation array :\n");
			 for(i=0;i<3;i++)
			 {
				for(j=0;j<3;j++)
				{
					for(k=0;k<3;k++)
					{
						printf("%d\t",a3[i][j][k]);
					}
					printf("\n");
				}
				printf("\n");
			 }
			 break;
		  case 4 : exit(0);
		}
		getch();
	 }
}