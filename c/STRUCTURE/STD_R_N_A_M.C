/*
     Write a program to store and print the roll no.,   name , age and marks of a student using structures.
*/


#include<stdio.h>
int main()
{
    struct student
    {
        int roll_no;
        char name[20];
        int age;
        int marks;
    };

    struct student std;
    printf("Enter following details : \n");

    printf("roll no. : ");
    scanf("%d",&std.roll_no);
    printf("name : ");
    scanf("%s",std.name);
    fflush(stdin);
    printf("age : ");
    scanf("%d",&std.age);
    printf("marks : ");
    scanf("%d",&std.marks);

    return 0;
}