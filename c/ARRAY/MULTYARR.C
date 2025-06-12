/*reads a 3x3 matrix from the user and displays it.*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int m[3][3],i,j;
	clrscr();

	for(i=0;i<3;i++)
	{
		printf("Enter R%d1 = ",i+1);
			scanf("%d",&m[i][0]);
		printf("Enter R%d2 = ",i+1);
			scanf("%d",&m[i][1]);
		printf("Enter R%d3 = ",i+1);
			scanf("%d",&m[i][2]);
	}

	printf("\nMatrix form : \n\n");

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
				printf("%d\t",m[i][j]);
		}
		printf("\n");
	}

getch();
}