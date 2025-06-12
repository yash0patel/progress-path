/*
    Write a program to compare two dates entered by user. Make a structure named Date to store the elements day, month and year (all integers) to store the dates. If the dates are equal, display "Dates are equal" otherwise display "Dates are not equal".
*/
struct date
{
    int day;
    int month;
    int year;
};

#include<stdio.h>
int main()
{
    struct date d1, d2;
    printf("Enter first date ");
    printf("\nday : ");
    scanf("%d",&d1.day);
    printf("month : ");
    scanf("%d",&d1.month);
    printf("year : ");
    scanf("%d",&d1.year);
    printf("\n(dd/mm/yyyy) : %d/%d/%d\n",d1.day,d1.month,d1.year);

    printf("\n\nEnter second date ");
    printf("\nday : ");
    scanf("%d",&d2.day);
    printf("month : ");
    scanf("%d",&d2.month);
    printf("year : ");
    scanf("%d",&d2.year);
    printf("\n(dd/mm/yyyy) : %d/%d/%d\n",d2.day,d2.month,d2.year);

    if (d1.day == d2.day && d1.month == d2.month && d1.year == d2.year)
    {
        printf("\nDates are equal");
    }
    else
    {
        printf("\nDates are not equal");
    }
}