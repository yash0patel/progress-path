/* This program simulates a simple banking system with functionality to deposit, withdraw, check balance, 
and view the last transaction using file handling. */
#include <stdio.h>
#include <stdlib.h>

void getbalance(int *balance)
{
    FILE *fp;

    fp = fopen("accounts.txt", "r");
    fscanf(fp, "%d", balance);
    fclose(fp);
};

void updateBalance(int balance)
{
    FILE *fp;

    fp = fopen("accounts.txt", "w");
    fprintf(fp, "%d", balance);
    fclose(fp);
}

void updateTransactions(int amount)
{
    FILE *fp;
    fp = fopen("transactions.txt", "a");
    // printf("Cursor is at: %d\n", ftell(fp));
    fseek(fp, 0, SEEK_SET);
    // printf("Cursor is at: %d\n", ftell(fp));
    fprintf(fp, "%d\n", amount);
    fclose(fp);
}

int getLastTransaction(int *amount)
{
    FILE *fp;
    fp = fopen("transactions.txt", "w+");
    fseek(fp, 0, SEEK_CUR);
    fscanf(fp, "%d", amount);
    printf("Cursor is at: %d\n", ftell(fp));
    fclose(fp);
}

int main()
{
    int balance, amount, op;

    while (1)
    {
        getbalance(&balance);
        printf("\nPress:\n");
        printf("1 for deposite\n");
        printf("2 for withdrawl\n");
        printf("3 to check balance\n");
        printf("4 to view the last transaction\n");
        printf("9 to exit\n");

        scanf("%d", &op);
        switch (op)
        {
        case 1:
            printf("Enter amount to deposite: ");
            scanf("%d", &amount);
            balance += amount;
            printf("New balance = %d\n", balance);
            updateBalance(balance);
            updateTransactions(amount);
            break;

        case 2:
            printf("Enter amount to withdraw: ");
            scanf("%d", &amount);
            balance -= amount;
            printf("New balance = %d\n", balance);
            updateBalance(balance);
            updateTransactions(-amount);
            break;

        case 3:
            getbalance(&balance);

            printf("Your current balance is: %d\n", balance);
            break;

        case 4:
            getLastTransaction(&amount);
            printf("Last transaction = %d", amount);
            break;

        case 9:
            exit(0);

        default:
            printf("\nThis operation is not supported at the moment. Please try again...\n");
        }
    }
    return 0;
}