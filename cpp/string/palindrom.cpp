// Extracting and printing the first word of the input string.

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char str[50], str1[50], rev[50];
    int i=0;
    cout << "Enter name : ";
    gets(str);
    while(str[i] == '\0')
    {
    for (i = 0;str[i] != ' '; i++)
    {
        str1[i] = str[i];
    }
}
    cout << str1;
    // strcpy(rev, strrev(str));

    // if (strcmp(str1, rev) == 0)
    // {
    //     cout << "palindrome string";
    // }
    // else
    // {
    //     cout << "not palindrome string";
    // }
    return 0;
}