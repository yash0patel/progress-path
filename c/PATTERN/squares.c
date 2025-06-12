/* This program prints a pattern of concentric squares with decreasing numbers. */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n=5,start=0,size=n*2-1,a[size][size],end = size-1;
    // scanf("%d", &n);
  	// Complete the code to print the pattern.
    while (n != 0) {
        for (int i=start; i<=end; i++) {
            for (int j=start; j<=end; j++) {
                if (i == start || j == end || i == end || j == start) {
                    a[i][j] = n;
                }
            }
        }
        start++;
        end--;
        n--;
    }
    
    for (int l=0; l<size; l++)
    {
      for (int k=0; k<size; k++) {
          printf("%d ",a[l][k]);
      }  
      printf("\n");
    } 
    return 0;
}