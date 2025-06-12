/* 
   Compare three numbers and print the smallest or check if all are equal
*/
#include<stdio.h>
#include<conio.h>
void main(){
     int a,b,c;
     clrscr();
     printf("\n enter a : ");
     scanf("%d",&a);
     printf("\n enter b : " );
     scanf("%d",&b);
     printf("\n enter c : ");
     scanf("%d",&c);
     if (a<b && b<c)
     {
     printf("a");
     }
     else if(b<c && c<a)
     {
     printf("b");
     }
     else if(c<b && b<a)
     {
     printf("c");
     }
     else if (a==b && b==c && a==c)
     {
     printf("all is eqal");
     }
    getch();
}