#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
#include"login.h"

void login()
{
	int a=0,i=0;
    char uname[10],c=' '; 
    char pword[10],code[10];
    char user[10]="ShivaniK";
    char pass[10]="123456";
    do
{
	
    printf("\n  **************************  WELCOME TO THE LOGIN PAGE  ***********************  ");
    printf(" \n\n                   ENTER USERNAME: ");
	scanf("%s", &uname); 
	printf(" \n\n                   ENTER PASSWORD: ");
	while(i<10)
	{
	    pword[i]=getch();
	    c=pword[i];
	    if(c==13) break;
	    else printf("*");
	    i++;
	}
	pword[i]='\0';
	i=0; 
		if(strcmp(uname,"ShivaniK")==0 && strcmp(pword,"123456")==0)
	{
	printf("  \n\n\n      CONGRATULATIONS ON SUCCESSFUL LOGIN ! ");
	printf("\n\n\n         WELCOME TO OTT MANAGEMENT SYSTEM !!");
	printf("\n\n\n\t\t\t\t      Press any key to continue...");
	getch();
	break;
	}
	else
	{
		printf("\n        SORRY!!!!  IT SEEMS YOUR USERNAME OR PASSWORD IS INCORRECT!");
		a++;
		
		getch();
		system("cls");
		
	}
}
	while(a<=2);
	if (a>2)
	{
		printf("\nOops! You have entered the wrong Username or Password for the fourth time!!!");
		
		getch();
		
		}
		system("cls");	
		
}
