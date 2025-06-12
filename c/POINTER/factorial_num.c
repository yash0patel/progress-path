/*
    5.Write a program to find the factorial of a number using pointers.
*/
#include <stdio.h>
int factorial(int *x){
    int temp = 1,*fact;
    fact = &temp;

    for (int i = 1; i <= *x; i++)
    {
        *fact *= i;
    }

    return *fact;
}
int main()
{
    int a, *pa;
    pa = &a;

    printf("Enter number(int) : ");
    scanf("%d", pa);

    printf("factorial = %d",factorial(pa));
    
    return 0;
}