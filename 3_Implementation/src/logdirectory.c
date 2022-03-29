#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
#include"logdirectory.h"

void logdirectory()
{
	FILE *f;
	int i;
	if((f=fopen("ott.txt","rb"))==NULL)
		exit(0);
	system("cls");
	printf("Phone Number\t\tUser Name\t\tBilling Amount\n");
	for(i=0;i<79;i++)
		printf("-");
	while(fread(&s,sizeof(s),1,f)==1)
	{
		printf("\n%s\t\t%s\t\tRs. %.2f /-",s.phonenumber,s.name,s.billingamount);
	}
	printf("\n");
	for(i=0;i<79;i++)
		printf("-");

fclose(f);
printf("\n\nPress Any Key To Go Back");
getch();
system("cls");

}
