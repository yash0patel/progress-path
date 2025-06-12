/* This program reverses an array of 5 integers using pointer manipulation. */

#include<stdio.h>
void reverse(int *a)
{
        int temp;
        for (int i = 0; i <= 5/2; i++)
        {
            temp = a[5-1-i];
            a[5-1-i] = a[i];
            a[i] = temp;
        }
        // int start = 0;
        // int end = 5-1;

        // while (start <= end)
        // {
        //     int temp=a[start];
        //     a[start] = a[end];
        //     a[end] = temp;
        //     start++;
        //     end--;
        // }
}

int main()
{
    int arr[5];
    
    for (int i = 0; i < 5; i++)
    {
        printf("Enter %d element : ",i+1);
        scanf("%d",&arr[i]);
    }
    
    reverse(arr);

    for (int i = 0; i < 5; i++)
    {
        printf("%d\t",arr[i]);
    }
    
    return 0;
}