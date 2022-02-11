#include"phonebook.h"
#include <stdio.h>
#include <conio.h>
#include<ctype.h>
#include <windows.h>
#include <direct.h>
#include <stdlib.h>
void name(){
	system("cls");

	printf("NEW SECTION");
	FILE *fptr;
	char name[100];
	char address[100];
	char emailID[100];
	double contact;
	fptr=fopen("jayavarshini.txt","ab+");//ab+ gives us the ability of writing the function and add the second data in the existing one...
	if(fptr==NULL){
		printf("Failed to create file.");
	}
	else{

		printf("Name:\t");
		gets(name);
		printf("Address:\t");
		gets(address);
		printf("emailID:\t");
		gets(emailID);
		printf("contact Number:\t");
		scanf("%lf",&contact);
		fprintf(fptr,"%s %s %s %.0lf\n",name,address,emailID,contact);
	}
	fclose(fptr);
	system("cls");
	char ch;

	printf("Do you wannt to add more data.  Press 'y' for that:");
	Sleep(1000);
	fflush(stdin);
	while((ch=getch())=='y'){
		menu();
	}
}
