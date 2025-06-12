/* 
    3. Write a program to store the roll no. (starting  from 1), name and age of 5 students and then print   the details of the student with roll no. given by user.
*/

#include<stdio.h>
int main()
{
    struct std_r_n_a
    {
        int roll_no;
        char name[20];
        int age;
    };
    
    struct std_r_n_a std[5];

    int num;

    for (int i = 0; i < 5; i++)
    {
        printf("\nEnter following details for student %d\n",i+1);
        printf("roll no. = %d\n",i+1);
        std[i].roll_no = i+1;
        printf("name : ");
        fflush(stdin);
        scanf("%s",std[i].name);
        printf("age : ");
        scanf("%d",&std[i].age);
    }
    
    for (int i = 0; i < 5; i++)
    {
        printf("\nDetails of student %d\n",i+1);
        printf("roll no. = %d\n",std[i].roll_no);
        printf("name : %s\n",std[i].name);
        printf("age : %d\n",std[i].age);
    }
    
    printf("\nEnter student roll no. for details : ");
    scanf("%d",&num);

    printf("\nDetails of student %d\n",num);
    printf("roll no. = %d\n",std[num].roll_no);
    printf("name : %s\n",std[num].name);
    printf("age : %d\n",std[num].age);
    
    return 0;
}