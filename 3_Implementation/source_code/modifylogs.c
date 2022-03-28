#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
#include"modifylogs.h"

void modifylogs()
{
		FILE *f;
	char phonenumber[15];
	long int size=sizeof(s);
	if((f=fopen("ott.txt","rb+"))==NULL)
		exit(0);
	system("cls");
	printf("Enter phone Number you had like to modify: ");
	scanf("%s",phonenumber);
	fflush(stdin);
	while(fread(&s,sizeof(s),1,f)==1)
	{
		if(strcmp(s.phonenumber,phonenumber)==0)
		{
			system("cls");
			printf("\n Enter phone Number: ");
			scanf("%s",&s.phonenumber);
			printf("\n Enter user name to be modified to our database (Without spacing): ");
			fflush(stdin);
			scanf("%[^\n]",&s.name);
			printf("\n Enter Billing amount: ");
			scanf("%f",&s.billingamount);
			fseek(f,-size,SEEK_CUR);
			fwrite(&s,sizeof(s),1,f);
			break;
		}
	}
	fclose(f);
	system("cls");
}