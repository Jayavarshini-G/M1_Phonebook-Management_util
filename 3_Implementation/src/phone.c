#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "name.h"
#nclude "find.h"
#include "list.h"
#nclude "modify.h"
#include "deleted.h"
#nclude "exit.h"

void menu(void);
void password(void);
void name(void);
void Find(void);
void list(void);
void modify(void);
void deleted(void);
void exitfun(void);

void gotoxy(int x,int y){
	COORD c;
	c.X=x;
	c.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
int main(){
    system("cls");
	system("color A");
	password();
	getch();
}
void menu(){
	system("cls");
	gotoxy(30,1);
	printf("CONTACT LOG ");
	gotoxy(31,4);
	printf("1.Add New");
	gotoxy(31,7);
	printf("2.Find");
	gotoxy(31,10);
	printf("3.List");
	gotoxy(31,13);
	printf("4.Change");
	gotoxy(31,16);
	printf("5.Delete");
	gotoxy(31,19);
	printf("6.Exit");
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
