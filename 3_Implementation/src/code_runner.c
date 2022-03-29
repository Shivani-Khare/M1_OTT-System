#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>

struct user
{
char phonenumber[15];
char name[50];
float billingamount;
}s;

void addlogs();
void logdirectory();
void modifylogs();
void removelogs();
void searchlogs();
void makepayment();
void login();
char get;
int main()
{	int password;
	int phonenumber;
	char choice;
	
    system("cls");
	system("color  02");
	printf("\n\n");
    printf("\n\t\t\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB GREETINGS OF THE DAY! \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
	printf("\n\n");
	printf("\n\t\t>>>>>>>>>>>> WELCOME TO OTT MANAGEMENT SYSTEM <<<<<<<<<<<<");
	printf("\n\n");
	printf("\n\n\n\t\t Want to continue? Press any Key!");
	Sleep(0);
	getch();
	system("cls");
	login();
	system ("color 0f");

	system("cls");
	system ("color 0f");

		system("color 0f");
		printf("\n\n***************  WELCOME TO THE LOGIN PAGE  ***************");
		
		
	while (1){
	      printf(" \n\n \xDB\xDB 1 : Add a New Log\n\n \xDB\xDB 2 : Modify Logs");
	     printf("\n\n \xDB\xDB 3 : Log Directory\n\n \xDB\xDB 4 : Make Payments");
		printf("\n\n \xDB\xDB 5 : Search Logs");
		printf("\n\n \xDB\xDB 6 : Remove Logs\n\n \xDB\xDB 7 : Exit\n");
	     printf("\n What do you want to do today?");
		 choice=getche();
		choice=toupper(choice);
		switch(choice)
		{    
			case '1':
			addlogs();break;
			case '2':
			modifylogs();break;
			case '3':
			logdirectory();break;
			case '4':
		    makepayment()	;break;
			case '5':
		    searchlogs()	;break;
			case '6':
		    removelogs();break;
			case '7':
				system("cls");
				printf("\n\n THANK YOU FOR REACHING OUT TO US! ");
	            Sleep(3000);
				exit(0);
				break; 
			default:
				system("cls");
				system("color 0F");
				printf("We look forward to seeing a valid input!");
				printf("\a......");
				printf("Press any key to continue");
				getch();
		}
	}
	
}
