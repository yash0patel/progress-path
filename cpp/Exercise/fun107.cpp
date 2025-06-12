// 107. Function to count Total Upper Letters , Lower OR any special letter.

#include <iostream>
using namespace std;

int upper, lower, number, special;

void readtext(char b[100]);
void counttext(char b[100]);

int main()
{
    char a[100];
    cout << "\n Enter your text & press $ for output:";
    readtext(a);
    counttext(a);
    cout << "upper : " << upper << endl;
    cout << "lower : " << lower << endl;
    cout << "number : " << number << endl;
    cout << "special : " << special << endl;
    return 0;
}

void readtext(char b[100])
{
    int i;
    for (i = 0; (b[i] = getchar()) != '$'; i++);
    b[i] = '\0';
}

void counttext(char b[100])
{
    int i;
    upper = lower = number = special = 0;
    for (i = 0; b[i]; i++)
    {
        if (b[i] >= 'A' && b[i] <= 'Z')
            upper++;
        else if (b[i] >= 'a' && b[i] <= 'z')
            lower++;
        else if (b[i] >= '0' && b[i] <= '9')
            number++;
        else
            special++;
    }
}
