/* This program performs arithmetic operations (addition, subtraction, multiplication, and division) on complex numbers. */
#include<stdio.h>
struct complex
{
    float real;
    float imag;
};
struct complex cscan()
{
    struct complex c;
    printf("Enter real Part : ");
    scanf("%f",&c.real);
    printf("Enter Imaginary Part : ");
    scanf("%f",&c.imag);
    return c;
}
struct complex cprint(struct complex c)
{
    printf("%.3f+(%.3fi)",c.real,c.imag);
}
struct complex add(struct complex c1 , struct complex c2)
{
    struct complex c;
    c.real = c1.real + c2.real;
    c.imag = c1.imag + c2.imag;
    return c;
}
struct complex sub(struct complex c1 , struct complex c2)
{
    struct complex c;
    c.real = c1.real - c2.real;
    c.imag = c1.imag - c2.imag;
    return c;
}
struct complex multy(struct complex c1 , struct complex c2)
{
    struct complex c;
    c.real = (c1.real*c2.real - c1.imag*c2.imag);
    c.imag = (c1.real*c2.imag + c1.imag*c2.real);
    return c;
}
struct complex div(struct complex c1 , struct complex c2)
{
    struct complex c;
    c.real=((c1.real*c2.real)+(c1.imag*c2.imag))/((c2.real*c2.real)+(c2.imag*c2.imag));
    c.imag=((c1.real*c2.imag)-(c1.imag*c2.real))/((c2.real*c2.real)+(c2.imag*c2.imag));
    return c;
}

int main()
{
    struct complex c1 ,c2 ,ans;
    int ch;

    printf("Enter complex number : \n");
    c1 = cscan();
    printf("\nc1 = ");
    cprint(c1);

    printf("Enter complex number : \n");
    c2 = cscan();
    printf("\nc2 = ");
    cprint(c2);

    printf("\n1. +\n2. -\n3. *\n4. /\n");
    printf("Enter your choice : ");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        ans = add(c1,c2);   
        break;
    case 2:
        ans = sub(c1,c2);   
        break;
    case 3:
        ans = multy(c1,c2);   
        break;
    case 4:
        ans = div(c1,c2);   
        break;
    
    default:
        printf("\ninvalide input");
        break;
    }
    printf("\nans : ");
    cprint(ans);
}

