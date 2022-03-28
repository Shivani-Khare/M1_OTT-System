#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
#include"addlogs.h"

void addlogs()
{
	FILE *f;
	char test;
	f=fopen("ott.txt","ab+");
	if(f==0)
	{   f=fopen("ott.txt","wb+");
		system("cls");
		printf("Organizing the system. Thank you for your patience!");
		printf("\nPress any key to continue");
		getch();
	}
	while(1)
	{
		system("cls");
		printf("\n Enter phone Number to be added to our database: ");
		scanf("%s",&s.phonenumber);
		printf("\n Enter user name to be added to our database (Without spacing): ");
		fflush(stdin);
		scanf("%s",&s.name);
		printf("\n Enter the correct billing amount: ");
		scanf("%f",&s.billingamount);
		fwrite(&s,sizeof(s),1,f);
		fflush(stdin);
		printf("\n\n Congratulations! We have updated our log directory with your log!");
		printf("\n Press esc Key to exit or Press any other key to add another log:");
		test=getche();
		if(test==27)
			break;
	}
	fclose(f);
	system("cls");

}
