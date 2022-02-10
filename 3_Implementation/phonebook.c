#include <stdio.h>
#include <conio.h>
#include<ctype.h>
#include <windows.h>
#include <direct.h>
#include <stdlib.h>

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
	fptr=fopen("jayavarshini.txt","ab+");//ab+ gives us the ability of writing the function and add the second data in the existing one...
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
void list(){
		FILE *fptr;
	char name[100],address[100],emailID[100],gen[8];
	double contact;
	int f;
	fptr=fopen("jayavarshini.txt","r");
	system("cls");
	gotoxy(31,2);
	printf("LIST SECTION OPENED");
	printf("\n");
	while(fscanf(fptr,"%s %s %s %s %lf",name,address,gen,emailID,&contact)!=EOF){

			printf("------------------------------------------\n");
		printf("Name:%s\n",name);
		printf("Address:%s\n",address);
		printf("gen:%s\n",gen);
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
void modify(){
	FILE *fptr,*fptr1;
	char name[100],address[100],emailID[100],emailID1[100],address1[100],name1[100],gen[8],gen1[8];
	int res,f=0;
	double contact,contact1;
	fptr=fopen("jayavarshini.txt","r");
	fptr1=fopen("temp.txt","a");
	system("cls");
	gotoxy(31,4);
	printf("Enter the name: ");
	gets(name1);
	system("cls");
	while(fscanf(fptr,"%s %s %s %s %lf\n",name,address,gen,emailID,&contact)!=EOF){
		res=strcmp(name,name1);
		if(res==0)
		{
			f=1;
			gotoxy(31,4);
	printf("Change SECTION OPENED");
			gotoxy(31,6);
			printf("Enter the new address:");
			scanf("%s",address1);
				gotoxy(31,7);
			printf("Enter the gen:");
			scanf("%s",gen1);
			gotoxy(31,8);
			printf("Enter the new emailID:");
			scanf("%s",emailID1);
			gotoxy(31,9);
			printf("Enter the new contact number:");
			scanf("%lf",&contact1);
			fprintf(fptr1,"%s %s %s %s %.0lf\n",name,address1,gen1,emailID1,contact1);

		}else{
			fprintf(fptr1,"%s %s %s %s %.0lf\n",name,address,gen,emailID,contact);
		}
	}
	if(f==0){
		printf("Record Not found.");
			}
	fclose(fptr);
	fclose(fptr1);
	fptr=fopen("jayavarshini.txt","w");
	fclose(fptr);
	fptr=fopen("jayavarshini.txt","a");
	fptr1=fopen("temp.txt","r");
	while(fscanf(fptr1,"%s %s %s %s %lf\n",name,address,gen,emailID,&contact)!=EOF){
		fprintf(fptr,"%s %s %s %s %.0lf\n",name,address,gen,emailID,contact);
	}
	fclose(fptr);
	fclose(fptr1);
	fptr1=fopen("temp.txt","w");
	fclose(fptr1);
	printf("\n\nPress y for menu option.");
	fflush(stdin);
	if(getch()=='y'){
		menu();
	}
}
void deleted(){
	FILE *fptr,*fptr1;
	char name[100],address[100],emailID[100],emailID1[100],address1[100],name1[100],gen[8];
	int res,f=0;
	double contact,contact1;
	fptr=fopen("jayavarshini.txt","r");
	fptr1=fopen("temp.txt","a");
	system("cls");
	gotoxy(31,4);
	printf("Enter the name to be deleted: ");
	gets(name1);
	system("cls");
	while(fscanf(fptr,"%s %s %s %s %lf\n",name,address,gen,emailID,&contact)!=EOF){
		res=strcmp(name,name1);
		if(res==0)
		{
			f=1;
			printf("DELETED ");

		}else{
			fprintf(fptr1,"%s %s %s %s %.0lf\n",name,address,gen,emailID,contact);
		}
	}
	if(f==0){
		printf("NOT FOUND.");
			}
	fclose(fptr);
	fclose(fptr1);
	fptr=fopen("jayavarshini.txt","w");
	fclose(fptr);
	fptr=fopen("jayavarshini.txt","a");
	fptr1=fopen("temp.txt","r");
	while(fscanf(fptr1,"%s %s %s %s %lf\n",name,address,gen,emailID,&contact)!=EOF){
		fprintf(fptr,"%s %s %s %s %.0lf\n",name,address,gen,emailID,contact);
	}
	fclose(fptr);
	fclose(fptr1);
	fptr1=fopen("temp.txt","w");
	fclose(fptr1);
	printf("\n\nPress y for menu option.");
	fflush(stdin);
	if(getch()=='y'){
		menu();
	};
}
void exitfun(){
	system("cls");
	gotoxy(31,4);
	printf("THANK YOU");
	system("cls");
    system("color 7");
}
void password(void){
	char passwords[20]={"jayavarshini"};
	gotoxy(22,2);
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
	gotoxy(30,4);
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
		gotoxy(30,6);
		printf("CORRECT PASSWORD.");
        system("color D");
		Sleep(1000);
		menu();
	}
	else{
        system("color 4");
		gotoxy(30,6);
		printf("PASSWORD MISMATCH.");
		Sleep(700);
		system("cls");
		password();
}
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
