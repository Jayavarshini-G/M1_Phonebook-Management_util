#include"phonebook.h"
#include <stdio.h>
#include <conio.h>
#include<ctype.h>
#include <windows.h>
#include <direct.h>
#include <stdlib.h>
void list(){
		FILE *fptr;
	char name[100],address[100],emailID[100],gen[8];
	double contact;
	int f;
	fptr=fopen("jayavarshini.txt","r");
	system("cls");

	printf("LIST SECTION OPENED");
	printf("\n");
	while(fscanf(fptr,"%s %s %s %s %lf",name,address,gen,emailID,&contact)!=EOF){

			printf("------------------------------------------\n");
		printf("Name:%s\n",name);
		printf("Address:%s\n",address);
		printf("emailID:%s\n",emailID);
		printf("contact:%.0lf\n",contact);
			f=1;
				printf("------------------------------------------");
				printf("\n\n");
		}
		Sleep(1000);
		printf("Enter y for menu section:");
		while(getch()=='y'){
			menu();
		}
			fclose(fptr);
			}
