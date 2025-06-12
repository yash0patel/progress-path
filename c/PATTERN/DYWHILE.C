/* Program to print a pattern of stars in a specific triangular format repeated multiple times */
#include<stdio.h>
#include<conio.h>
void main(){
	int i,j,k;
	clrscr();
	k=1;
	while(k<=5) {
		i=1;
		while(i<=3){
			j=1;
			while(j<=i){
				printf("*");
					j++;
	}
				printf("\n");
					i++;
	}
				printf("\n");
					k++;
	}

getch();

}

