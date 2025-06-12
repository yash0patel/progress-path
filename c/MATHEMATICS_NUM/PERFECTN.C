/* Checks whether the given number is a perfect number */
#include<stdio.h>
#include<conio.h>
void main(){
     int a,i,j=0;
     clrscr();

     printf("Enter any number : ");
     scanf("%d",&a);

     for(i=1;i<a;i++)
     {
	if(a%i==0)
	{
		j=j+i;
	}
     }
		     //print
	if(a==j)
	{
		printf("%d is perfect number",a);
	}
	else
	{
		printf("%d is not a perfect number",a);
	}

getch();
}