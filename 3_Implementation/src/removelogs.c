#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
#include"removelogs.h"

void removelogs()
{
	FILE *f,*t;
	char phonenumber[15];
	system("cls");
	f=fopen("ott.txt","rb+");
	t=fopen("ott1.txt","wb+");
	do{
	rewind(f);
	printf("Enter the phone Number to be removed from our Database: ");
	scanf("%s",phonenumber);
	while(fread(&s,sizeof(s),1,f)==1)
	{
		if(strcmp(s.phonenumber,phonenumber)!=0)
		{       	fwrite(&s,sizeof(s),1,t);

		}
		else
		printf("Your record has been removed successfully. You will be missed!");
	}

	fclose(f);
	fclose(t);
	remove("ott.txt");
	rename("ott1.txt","ott.txt");
	
	f=fopen("ott.txt","rb+");
	t=fopen("ott1.txt","wb+");
    printf("\nDo you want to remove another record (y/n):");
	fflush(stdin);
	  }
    	while(getche()=='Y'||getche()=='y');
		fclose(f);
	getch();
	system("cls");
}