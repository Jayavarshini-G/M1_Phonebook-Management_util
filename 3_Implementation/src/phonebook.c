#include <stdio.h>
#include <conio.h>
#include<ctype.h>
#include <windows.h>
#include <direct.h>
#include <stdlib.h>
#include "main.h"


int main(){
    system("cls");
	system("color A");
	password();
	getch();
}
void menu(){
	system("cls");

	printf("CONTACT LOG\n");

	printf("1.Add New\n");

	printf("2.Find\n");

	printf("3.List\n");

	printf("4.Change\n");

	printf("5.Delete\n");

	printf("6.Exit\n");
	switch(getch()){
		case '1':
			name();
			break;
		case '2':
			Find();
			break;
		case '3':
			list();
			break;
		case '4':
			modify();
			break;
		case '5':
			deleted();
			break;
		case '6':
			exitfun();
			break;
		default:
			system("cls");
			printf("Invalid Enter.");
			getch();
}
}
