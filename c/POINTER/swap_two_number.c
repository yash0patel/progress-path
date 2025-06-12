/* This program swaps the values of two integers using pointers. */
#include<stdio.h>
void swap(int *x,int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a,b;
    
    printf("Enter two number : ");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("a = %d\ty = %d",a,b);
}