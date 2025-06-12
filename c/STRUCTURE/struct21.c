/*
    add employee data(name,address,id,age,salary) and show or search using switch case.
*/

#include <stdio.h>
int main()
{
    struct employee
    {
        char name[20];
        char address[40];
        int id;
        int age;
        float salary;
    };

    struct employee emp[10];
    int j = 0, select, flag = 0, op;

    while (j != -1)
    {
        printf("\n\n1. add data \n2. show data \n3. search data \n0. exit");
        printf("\nEnter your choice : ");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            printf("\nEnter details of employee : \n");

            printf("name : ");
            scanf("%s", emp[j].name);
            printf("address : ");
            scanf("%s", emp[j].address);
            printf("id : ");
            scanf("%d", &emp[j].id);
            printf("age : ");
            scanf("%d", &emp[j].age);
            printf("salary : ");
            scanf("%f", &emp[j].salary);
            j++;
            break;

        case 2:
            for (int i = 0; i < j; i++)
            {
                printf("\nname : %s\n", emp[i].name);
                printf("address : %s\n", emp[i].address);
                printf("id : %d\n", emp[i].id);
                printf("age : %d\n", emp[i].age);
                printf("salary : %f\n", emp[i].salary);
            }
            if (j == 0)
            {
                printf("\nno data added\n");
            }
            break;

        case 3:
            printf("\nEnter id for search : ");
            scanf("%d", &select);
            for (int i = 0; i < j; i++)
            {
                if (emp[i].id == select)
                {
                    printf("name : %s\n", emp[i].name);
                    printf("address : %s\n", emp[i].address);
                    printf("id : %d\n", emp[i].id);
                    printf("age : %d\n", emp[i].age);
                    printf("salary : %f\n", emp[i].salary);
                    flag = 1;
                }
            }
            if (flag == 0)
            {
                printf("\n--id is not found--\n");
            }
            break;

        case 0:
            j = -1;
            break;

        default:
            printf("\n---invalide choice---");
            break;
        }
    }
}