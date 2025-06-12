//Matrix Equality Check
#include<stdio.h>
#include<conio.h>
void main()
{
	int m[3][3],n[3][3],i,row,col,j,c=0;
	clrscr();

	printf("Enter number of row : ");
	scanf("%d",&row);

	printf("Enter number of col : ");
	scanf("%d",&col);

	printf("1st metrix\n\n");
	for(i=0;i<row;i++)
	{       for(j=0;j<col;j++)
		{
			printf("Enter R%d%d = ",i+1,j+1);
			scanf("%d",&m[i][j]);
		}
	}

	printf("2nd metrix\n\n");
	for(i=0;i<row;i++)
	{       for(j=0;j<col;j++)
		{
			printf("Enter R%d%d = ",i+1,j+1);
			scanf("%d",&n[i][j]);
		}
	}

	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(m[i][j]  != n[i][j])
			{
				c=1;
				break;
			}
		}
	}

	if(c == 0)
	{
		printf("\nequal");
	}
	else
	{
		printf("\nnot equal");
	}

getch();
}