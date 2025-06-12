    
    // 6. Write a program to count digits of a number using pointers.


#include <stdio.h>
int main()
{
    int a, count = 0, *pa, *pcount;
    pa = &a;
    pcount = &count;

    printf("Enter number(int) : ");
    scanf("%d", pa);

    while (*pa > 0)
    {
        *pa = *pa / 10;
        (*pcount)++;
    }
    printf("number of digits = %d", *pcount);

    return 0;
}