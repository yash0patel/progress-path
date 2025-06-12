/*
    8. Write a structure to store the name, account number and balance of customers (more than 10) and store their information.
    1 - Print the names of all the customers having balance less than $200.
    2 - Add $100 in the balance of all the customers having more than $1000 in their balance and then print the incremented value of their balance.
*/

#include <stdio.h>
struct customer_account
{
    char name[20];
    int account_number;
    float balance;
};

int main()
{
    struct customer_account acc[50];
    int j = 0, exit = 0, i = 0;

    while (1)
    {

        printf("\nEnter following details for %d customer", j + 1);
        printf("\nname : ");
        scanf("%s", acc[j].name);
        printf("account_number : ");
        scanf("%d", &acc[j].account_number);
        printf("balance: $");
        scanf("%f", &acc[j].balance);

        j++;
        if (j > 4 + i)
        {
            printf("\n\nTo create accounts, enter the number of accounts you need \n\t\t\t   or\n\t\t  enter '0' to exit : ");
            scanf("%d", &exit);
            printf("\n");
            if (exit == 0)
            {
                break;
            }
            i = i + exit;
        }
    }

    printf("\nthe names of all the customers having balance less than $200.\n");
    for (int i = 0; i < j; i++)
    {
        if (acc[i].balance < 200)
        {
            printf("%s\n", acc[i].name);
        }
    }

    printf("\n\nthe incremented value of customer balance, who have more than $1000 balance.");
    for (int i = 0; i < j; i++)
    {
        if (acc[i].balance > 1000)
        {
            acc[i].balance = acc[i].balance + 100;
            printf("\ndetails of %d customer", i);
            printf("\nname : %s", acc[i].name);
            printf("\nbalance : $%.3f\n", acc[i].balance);
        }
    }
}