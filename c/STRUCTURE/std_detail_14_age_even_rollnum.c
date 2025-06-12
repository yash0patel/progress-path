/*
    7. Write a structure to store the roll no., name, age (between 11 to 14) and address of students (more than 10). Store the information of the students.
    1 - Print the names of all the students having age 14.
    2 - Also print the names of all the students having even roll no.

*/

#include<stdio.h>
struct student
{
    int roll_no;
    char name[20];
    int age;
    char address[30];
};


int main()
{
    struct student std[11];

    for (int i = 0; i < 11; i++)
    {
        printf("\n\nEnter details of student %d\n",i+1);
        printf("roll no. : ");
        scanf("%d",&std[i].roll_no);
        printf("name : ");
        scanf("%s",std[i].name);
        
        age:
        printf("age(between 11 to 14) : ");
        scanf("%d",&std[i].age);
        if (std[i].age < 11 || std[i].age > 14)
        {
            printf("\n---invalide age---\n\n");
            goto age;
        }
        
        printf("address : ");
        scanf("%s",std[i].address);
    }

    printf("\nthe names of all the students having age 14");
    for (int i = 0; i < 11; i++)
    {
 
        if (std[i].age == 14)
        {
            printf("\n%s",std[i].name);
        }
    }

    printf("\n\nthe names of all the students having even roll no.");
    for (int i = 0; i < 11; i++)
    {
 
        if (std[i].roll_no % 2 != 0)
        {
            printf("\n%s",std[i].name);
        }       
    }   
}