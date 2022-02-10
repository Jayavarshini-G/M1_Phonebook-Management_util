#include <stdio.h>
#include <ctype.h>
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
	gotoxy(18,2);
	printf("Enter the name of the person you want to see the detail:: ");
	gets(name1);
	fptr=fopen("jayavarshini.txt","r");
	//fflush(stdin);
	while(fscanf(fptr,"%s %s %s %s %lf\n",name,address,gen,emailID,&contact)!=EOF){
		res=strcmp(name,name1);
		if(res==0){
			gotoxy(39,4);
			printf("Record Found");
			gotoxy(28,5);
			printf("----------------------------------------");
		gotoxy(31,6.5);
		printf("Name:\t%s",name);
		gotoxy(31,7);
		printf("Address:\t%s",address);
			gotoxy(31,8);
		printf("gender:\t%s",gen);
		gotoxy(31,9);
		printf("emailID:\t%s",emailID);
		gotoxy(31,10);
		printf("contact Number:\t%.0lf",contact);
		gotoxy(31,11);
			printf("----------------------------------------");
		flag=1;
		Sleep(1000);
			gotoxy(18,12);
			printf("Enter y for menu option.");
	while(getch()=='y'){
		menu();
	}
	}
}
	if(flag==0){
		system("cls");
		gotoxy(39,4);
		printf("No record found.");;
		gotoxy(39,6);
		printf("Enter a to enter file again or double 'y' key to open menu section:");
		if(getch()=='a'){
			system("cls");
			Find();
		}
	}
	fclose(fptr);
}
