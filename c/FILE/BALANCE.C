/* Program to read, update and store account balance from a file */

#include<stdio.h>

void getbalance(int *pbalance)
{
    FILE *file;

    file = fopen("account.txt", "r");
    fscanf(file, "%d", pbalance);
    fclose(file);
};

void upadetbalance(int *pbalance)
{
     FILE *file;

    file = fopen("account.txt", "w");
    fprintf(file, "%d", *pbalance);
    fclose(file);
}

int main()
{
    int balance = 1000, *ptr ,amount;
    ptr = &balance;

    getbalance(ptr);

    printf("Your current balance = %d\n",balance);

    printf("Enter amount to deposite: ");
    scanf("%d", &amount);
    balance += amount;
    printf("New balance = %d\n", balance);

    upadetbalance(ptr);

    return 0;
}