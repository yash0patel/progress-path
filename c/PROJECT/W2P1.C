#include <stdio.h>
#define MIN_INCOME 500.00
#define MAX_INCOME 400000.00
#define MAX_ITEM 10
#define MIN_ITEM_COST 100.00

int main()
{
    double income;
    int item;

    double cost[MAX_ITEM];
    int priority[MAX_ITEM];
    char finance[MAX_ITEM];

    double total_cost=0;

    printf("+--------------------------+\n");
    printf("+   Wish List Forecaster   |\n");
    printf("+--------------------------+\n");

    //income
    while (1)
    {
        printf("\nEnter your monthly NET income: $");
        scanf("%lf", &income);

        if (income < MIN_INCOME)
        {
            printf("ERROR: You must have a consistent monthly income of at least $%.2f\n", MIN_INCOME);
        }
        else if (income > MAX_INCOME)
        {
            printf("ERROR: Liar! I'll believe you if you enter a value no more than $%.2f\n", MAX_INCOME);
        }
        else
        {
            break;
        }
    }

    //numbers of item
    while (1)
    {
        printf("\nHow many wish list do you want to forecast?: ");
        scanf("%d", &item);

        if (item > MAX_ITEM || item < 1)
        {
            printf("ERROR: List is restricted to between 1 and 10 items.\n");
        }
        else
        {
            break;
        }
    }

    //item info
    for (int i = 0; i < item; i++)
    {
        printf("\nItem-%d Details:\n", i + 1);
        //cost
        while (1)
        {
            printf("\tItem cost: $");
            scanf("%lf", &cost[i]);
            if (cost[i] < MIN_ITEM_COST)
            {
                printf("\t\tERROR: Cost must be at least $%.2f\n", MIN_ITEM_COST);
            }
            else
            {
                total_cost += cost[i];
                break;
            }
        }
        //priority
        while (1)
        {
            printf("\tHow important is it to you? [1=must have, 2=important, 3=want]: ");
            scanf("%d", &priority[i]);
            if (priority[i] < 1 || priority[i] > 3)
            {
                printf("\t\tERROR: Value must be between 1 and 3\n");
            }
            else
            {
                break;
            }
        }
        //finance
        while (1)
        {
            printf("\tDose this item have financing options? [y/n]: ");
            fflush(stdin);
            scanf("%c",&finance[i]);
            if (finance[i] != 'y' && finance[i] != 'n')
            {
                printf("\t\tERROR: Must be a lowercase 'y' or 'n'\n");
            }
            else
            {
                break;
            }    
        }
    }

    //table
    printf("\nItem Priority Financed        Cost\n");
    printf("---- -------- -------- -----------\n");
    for (int i = 0; i < item; i++)
    {
        printf("%3d  %5d    %5c    %11.2lf\n",i+1,priority[i],finance[i],cost[i]);
    }
    printf("---- -------- -------- -----------\n");
    printf("                      $%11.2lf\n\n",total_cost);

    printf("Best of luck in all your future endeavours!");
    return 0;
}