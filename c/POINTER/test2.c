/* This program counts the number of words in a string entered by the user. */
#include<stdio.h>
int cname(char *a)
{
    int count = 1,i=0;
    while (a[i] != '\0')
    {
        if (a[i] == ' ' || a[i] == '\n' || a[i] == '\t')
        {
            count++;
        }
        i++;
    }
    
    return count;
}


int main()
{
    char name[50];

    printf("Enter string : ");
    gets(name);

    printf("number of words is %d",cname(name));
}