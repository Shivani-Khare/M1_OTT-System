#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
#include"searchlogs.h"

void searchlogs()
{
	FILE *f;
	char phonenumber[15];
	int flag=1;
	f=fopen("ott.txt","rb+");

	fflush(stdin);
	system("cls");
	printf("Enter phone Number you had like to search in our database: ");
	scanf("%s", phonenumber);
	while(fread(&s,sizeof(s),1,f)==1)
	{
		if(strcmp(s.phonenumber,phonenumber)==0)
		{	system("cls");
			printf(" Record Found ");
			printf("\n\nphonenumber: %s\nName: %s\nBillingAmount: Rs.%0.2f\n",s.phonenumber,s.name,s.billingamount);
			flag=0;
			break;
		}
		else if(flag==1)
		{	system("cls");
			printf("Requested log not found in our database! We're sorry!");
		}
	}
	getch();
	fclose(f);
	system("cls");
}