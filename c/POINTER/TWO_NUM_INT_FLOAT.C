/* This program prints the memory addresses of an integer and a float using pointers. */
#include<stdio.h>
int main()
{
    int a,*pa;
    float b,*pb;
    
    printf("Enter number(int) : ");
    scanf("%d",&a);
    pa = &a;
    printf("Enter number(float) : ");
    scanf("%f",&b);
    pb = &b;

    printf("eddress of a : %p\n",pa);
    printf("eddress of b : %p",pb);

    return 0;
}