/* General well-being log application for setting log dates within 2010-2021 */
#include<stdio.h>
#include<conio.h>
#define MIN_YEAR 2010
#define MAX_YEAR 2021
void main()
{
	int JAN=1,DEC=12,year,month,i;
	clrscr();

	printf("Log application\n");
	printf("\nGeneral well-being log\n");
	printf("======================");
//input year and month
	printf("\nEnter year : ");
	scanf("%d",&year);
	printf("Enter month : ");
	scanf("%d",&month);//end

	clrscr();

	printf("Log application\n");
	printf("\nGeneral well-being log\n");
	printf("======================\n");

	while(i<0)
	{
		printf("\nSet the year and month for the well-being log (YYYY MM) : ");
		printf("%d %d",year,month);
		printf("\n-----------------------------------------------------------------");

		if(year >= MIN_YEAR && year <= MAX_YEAR)
		{
			if(month >= JAN && month <= DEC)
			{
				clrscr();
//if all condition is true then;
				printf("Log application\n");
				printf("\nGeneral well-being log\n");
				printf("======================\n");
				printf("\nSet the year and month for the well-being log (YYYY MM) : ");
				printf("%d %d",year,month);
				printf("\n\n*** Log date set! ***\n\n");
//starting of switch case ->
				switch(month)
				{
					case 1:
						{
							printf("Log starting date: %d-JAN-01",year);
							break;
						}
					case 2:
						{
							printf("Log starting date: %d-FEB-01",year);
							break;
						}
					case 3:
						{
							printf("Log starting date: %d-MAR-01",year);
							break;
						}
					case 4:
						{
							printf("Log starting date: %d-APR-01",year);
							break;
						}
					case 5:
						{
							printf("Log starting date: %d-MAY-01",year);
							break;
						}
					case 6:
						{
							printf("Log starting date: %d-JUN-01",year);
							break;
						}
					case 7:
						{
							printf("Log starting date: %d-JUL-01",year);
							break;
						}
					case 8:
						{
							printf("Log starting date: %d-AUG-01",year);
							break;
						}
					case 9:
						{
							printf("Log starting date: %d-SEP-01",year);
							break;
						}
					case 10:
						{
							printf("Log starting date: %d-OCT-01",year);
							break;
						}
					case 11:
						{
							printf("Log starting date: %d-NOV-01",year);
							break;
						}
					case 12:
						{
							printf("Log starting date: %d-DEC-01",year);
							break;
						}
				}//end of switch case;
				break;
			}//end of if statment for month;
		}//end of if statment for year;
//error sentence
		else
		{
			printf("\n\tERROR: The year must be between 2010 and 2021 inclusive");
		}

		if(month >= JAN && month <= DEC);
		else
		{
			printf("\n\tERROR: Jan.(1) - Dec.(12)");
		}//end of error sentenc
//input year and month:
		printf("\n\nEnter year : ");
		scanf("%d",&year);
		printf("Enter month : ");
		scanf("%d",&month);
	}//end of while loop;

getch();
}