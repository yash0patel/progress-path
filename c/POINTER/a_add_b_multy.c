/* This program takes two integers as input, adds them, 
and multiplies them. It demonstrates pointer manipulation to modify the values. */
#include<stdio.h>
void add(int *x,int *y)
{
    int temp = *x;
    
    temp = *x; 
    *x = *x + *y;
    *y = (temp)*(*y);

}

int main()
{
    int a,*pa;
    int b,*pb;
    pa = &a;
    pb = &b;
    
    printf("Enter number(a) : ");
    scanf("%d",pa);
    printf("Enter number(b) : ");
    scanf("%d",pb);

    add(&a,&b);

    printf("add = %d\n",*pa);
    printf("multyplay = %d",*pb);

    return 0;
}