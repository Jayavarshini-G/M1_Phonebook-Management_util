#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>



void name(){
	system("cls");
	gotoxy(31,4);
	printf("NEW SECTION");
	FILE *fptr;
	char name[100];
	char address[100];
	char emailID[100];
	double contact;
	char gen[8];
	fptr=fopen("jayavarshini.txt","ab+");
	if(fptr==NULL){
		printf("Failed to create file.");
	}
	else{
		gotoxy(31,6);
		printf("Name:\t");
		gotoxy(52,6);
		gets(name);
		gotoxy(31,7);
		printf("Address:\t");
		gotoxy(52,7);
		gets(address);
		gotoxy(31,8);
		printf("gender:\t");
		gotoxy(52,8);
		gets(gen);
		gotoxy(31,9);
		printf("emailID:\t");
		gotoxy(52,9);
		gets(emailID);
		gotoxy(31,10);
		printf("contact Number:\t");
		gotoxy(52,10);
		scanf("%lf",&contact);
		fprintf(fptr,"%s %s %s %s %.0lf\n",name,address,gen,emailID,contact);
	}
	fclose(fptr);
	system("cls");
	char ch;
	gotoxy(31,4);
	printf("Do you wannt to add more data.  Press 'y' for that:");
	Sleep(1000);
	fflush(stdin);
	while((ch=getch())=='y'){
		menu();
	}
}
