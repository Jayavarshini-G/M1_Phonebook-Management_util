/**
*@filr main.c
*@author jayavarshini (jayavarshini2103@gmail.com)
*@brief code to mange log information
*@version 0.1
*@date 2022-02-10
*
*copyright copyright (c) 2022
*
*/


#include <stdio.h>
#include <conio.h>
#include<ctype.h>
#include <windows.h>
#include <direct.h>
#include <stdlib.h>
#include"phonebook.h"

int main(){
    system("cls");
	system("color A");
	password();
	getch();
}

void password(void){
	char passwords[20]={"jayavarshini"};

	int j;
	int z;
	char name[40]="WELCOME";
	z=strlen(name);
	for(j=0;j<=16;j++){
		Sleep(50);
		printf("\xDB");
	}
	for(j=0;j<=z;j++){
		Sleep(60);
		printf(" %c",name[j]);
	}
	for(j=0;j<=16;j++){
		Sleep(50);
		printf("\xDB");
	}

	printf("Password:");
	char ch,pass[20];
	char w='*';
	int i=0;
	while(ch!=13){
		ch=getch();
		if(ch!=13 && ch!=8){
			printf("%c",w);
			pass[i]=ch;
			i++;
		}
			}
	pass[i]='\0';
	if(strcmp(pass,passwords)==0){

		printf("CORRECT PASSWORD.");
        system("color D");
		Sleep(1000);
		menu();
	}
	else{
        system("color 4");

		printf("PASSWORD MISMATCH.");
		Sleep(700);
		system("cls");
		password();
}
}
