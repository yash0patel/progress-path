/* A simple bank account system with login, deposit, withdraw, and balance check functionality */
#include<stdio.h>
#include<conio.h>
#include<string.h>
char login(char username[20],char password[20])
{
	char  uname[20],pwd[20],j=1;
	fflush(stdin);

	//input uname and pwd
	printf("\nEnter username : ");
	scanf("%s",uname);

	printf("Enter password : ");
	scanf("%s",pwd);

	//compare
	if(strcmp(uname, username) == 0 && strcmp(pwd,password) == 0)
	{
		j = 0;
	}

	//print
	if(j == 0)
	{
		printf("\nLOGIN SUCCESSFULLY");
	}
	else
	{
		printf("\nusername or password does not match");
	}

return j;
}


void main()
{
	char username[20],password[20];
	int balance,amount,i,num,k=0;
	clrscr();

	//input username and password
	printf("Enter username : ");
	scanf("%s",username);

	printf("Enter password : ");
	scanf("%s",password);
	balance = 25000;

	while(k != 1)
	{
		//input choice
		if(login(username,password) == 0)
		{
			printf("\n\n 1. deposit\n 2. withdraw\n 3. check balance\n 4. exit\n Enter your choice : ");
			scanf("%d",&num);
		}


		//deposit
		if(num == 1)
		{
			printf("\nEnter amount to deposit : ");
			scanf("%d",&amount);
			balance += amount;
			printf("deposit of %d is successful\n",amount);
		}
		//withdraw
		else if(num == 2)
		{
			printf("Enter amount for withdraw : ");
			scanf("%d",&amount);
			if(balance>=amount && balance-amount >= 10000)
			{
				balance -= amount;
				printf("withdraw of %d is successful\n",amount);
			}
			else
			{
				printf("invalid amount\n");
			}
		}
		//check balance
		else if(num == 3)
		{
			printf("\nyour balance is %d\n",balance);
		}
		//exit
		else if(num == 4)
		{
			k = 1;
			break;
		}
		//invalid choice
		else
		{
			printf("\ninvalid option");
		}
	}
getch();
}