#include"phonebook.h"
#include <stdio.h>
#include <conio.h>
#include<ctype.h>
#include <windows.h>
#include <direct.h>
#include <stdlib.h>
void Find(){
	FILE *fptr;
	int flag=0;
	int res;
	char name[100];
	char address[100];
	char emailID[100];
	double contact;
	char gen[8];
	char name1[100];
	system("cls");
	fflush(stdin);

	printf("Enter the name of the person you want to see the detail:: ");
	gets(name1);
	fptr=fopen("jayavarshini.txt","r");
	//fflush(stdin);
	while(fscanf(fptr,"%s %s %s %s %lf\n",name,address,gen,emailID,&contact)!=EOF){
		res=strcmp(name,name1);
		if(res==0){

			printf("Record Found");

			printf("----------------------------------------");
            printf("\n");
		printf("Name:\t%s",name);
        printf("\n");
		printf("Address:\t%s",address);
        printf("\n");
		printf("gender:\t%s",gen);
        printf("\n");
		printf("emailID:\t%s",emailID);
        printf("\n");
		printf("contact Number:\t%.0lf",contact);
        printf("\n");
			printf("----------------------------------------");
		flag=1;
		Sleep(1000);

			printf("Enter y for menu option.");
	while(getch()=='y'){
		menu();
	}
	}
}
	if(flag==0){
		system("cls");
		;
		printf("No record found.");;

		printf("Enter a to enter file again or double 'y' key to open menu section:");
		if(getch()=='a'){
			system("cls");
			Find();
		}
	}
	fclose(fptr);
}
