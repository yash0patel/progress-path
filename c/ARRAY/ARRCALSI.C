// Performs element-wise addition, subtraction, multiplication, and division on two arrays of equal size
#include<stdio.h>
#include<conio.h>
void main()
{
	float a[50],b[50],a1,b1,sum[50],sub[50],mult[50],div[50],i;
	int num;
	clrscr();

	printf("Enter array a size : ");
	scanf("%f",&a1);

	printf("Enter array b size : ");
	scanf("%f",&b1);

	if(a1==b1)
	{
		printf("a -\n");
		for(i=0;i<a1;i++)
		{
			scanf("%f",&a[i]);
		}
		printf("\nb -\n");
		for(i=0;i<b1;i++)
		{
			scanf("%f",&b[i]);
		}

	while(1)
	{
		printf("\nEnter number for \n 1. addition\n 2. sub\n 3. multiplay\n 4. div\t : ");
		scanf("%d",&num);
			switch(num)
			{
				case 1 :printf("\naddition -\t");
					for(i=0;i<a1;i++)
					{
						sum[i] = a[i] + b[i];
						printf("%.0f\t",sum[i]);
					}
					break;
				case 2 :printf("\nsubstraction -\t");
					for(i=0;i<a1;i++)
					{
						sub[i] = a[i] - b[i];
						printf("%.0f\t",sub[i]);
					}
					break;
				case 3 :printf("\nmultyplay -\t");
					for(i=0;i<a1;i++)
					{
						mult[i] = a[i] * b[i];
						printf("%.0f\t",mult[i]);
					}
					break;
				case 4 :printf("\division -\t");
					for(i=0;i<a1;i++)
					{
						div[i] = a[i] / b[i];
						printf("%.2f\t",div[i]);
					}
					break;
				case 5 : exit(0);

				default :printf("invalid");
			}
		}
	}
	else
	{
		printf("invalid array size");
	}

getch();
}