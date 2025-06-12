/*
    
    4. Write a program to add two distances in inch-feet using structure. The values of the distances is to be taken from the user.

*/

#include<stdio.h>
int main()
{
    struct DISTANCE_INCH_FEET
    {
        float inch;
        float feet;
    };
    
    struct DISTANCE_INCH_FEET distance;

    float sum;

    printf("Enter distance in inch : ");
    scanf("%f",&distance.inch);
    
    printf("Enter distance in feet : ");
    scanf("%f",&distance.feet);
    
    //feet = inch/12;
    sum = (distance.inch/12) + distance.feet;

    printf("\ntotal distance is %f",sum);
    return 0;
}