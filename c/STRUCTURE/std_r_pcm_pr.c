/*
    Enter the marks of 5 students in Chemistry, Mathematics and Physics (each out of 100) using a structure named Marks having elements roll no., name, chem_marks, maths_marks and phy_marks and then display the percentage of each student in a tabular form.
    eg:
    RollNo  Chem    Maths   Phy     Percentage
    1       75      85      50      70
*/

#include<stdio.h>
#include<string.h>
int main()
{
    struct marks
    {
        int roll_no;
        char name[20];
        int chem_marks , maths_marks , phy_marks;
        float percentage;
    };

    struct marks std[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter following details for student %d : \n",i+1);
        printf("roll no. : ");
        scanf("%d",&std[i].roll_no);
        printf("name : ");
        fflush(stdin);
        scanf("%s",std[i].name);
        
        printf("Enter following subject marks scored by %s\n",std[i].name);
        printf("chemistry : ");
        scanf("%d",&std[i].chem_marks);
        printf("mathematics : ");
        scanf("%d",&std[i].maths_marks);
        printf("physics : ");
        scanf("%d",&std[i].phy_marks);

        std[i].percentage = (std[i].chem_marks+std[i].maths_marks+std[i].phy_marks)*100.00 / 300.00;
    }
    
    printf("RollNo \tChem \tMaths \tPhy \tPercentage");
    for (int i = 0; i < 5; i++)
    {
        printf("\n%d\t%d\t%d\t%d\t%f\n",std[i].roll_no,std[i].chem_marks,std[i].maths_marks,std[i].phy_marks,std[i].percentage);
    }
    
}