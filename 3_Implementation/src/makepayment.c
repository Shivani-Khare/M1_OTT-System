#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
#include"makepayment.h"

void makepayment()
{
	FILE *f;
	char phonenumber[15];
	long int size=sizeof(s);
	float amt;
	int i;
	if((f=fopen("ott.txt","rb+"))==NULL)
		exit(0);
	system("cls");
	printf("Enter phone Number of the subscriber: ");
	scanf("%s",phonenumber);
	fflush(stdin);
	while(fread(&s,sizeof(s),1,f)==1)
	{
		if(strcmp(s.phonenumber,phonenumber)==0)
		{
			printf("\n ***LOG DETAILS FOUND***");
			printf("\n phone Number of the subscriber: %s",s.phonenumber);
			printf("\n User Name of the subscriber: %s",s.name);
			printf("\n Current Billing amount to be made: %f",s.billingamount);
			printf("\n");
			for(i=0;i<79;i++)
				printf("-");
			printf("\n\nEnter Billing amount of payment you had like to pay: ");
			fflush(stdin);
			scanf(" %f",&amt);
			s.billingamount=s.billingamount-amt;
			fseek(f,-size,SEEK_CUR);
			fwrite(&s,sizeof(s),1,f);
			break;
		}
	}
	printf("\n\n");
	printf("System Message: ~THANK YOU %s WE APPRECIATE YOUR TIMELY PAYMENTS~",s.name);
    printf("\n\n");
    printf("Happy Binging!!");
	getch();
	fclose(f);
	system("cls");
	
}