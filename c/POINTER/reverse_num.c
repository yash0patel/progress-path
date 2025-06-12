/* This program takes an integer input and reverses its digits. */

#include <stdio.h>
int main()
{
    int a, count = 0, rev = 0;

    printf("Enter number(int) : ");
    scanf("%d", &a);
    int i = a;
    for (i; i != 0; i /= 10)
    {
        rev = rev*10 + i%10;
    }

    printf("The reverse of the input number is %d\n", rev);

    return 0;
}
