#include phonebook.h
#include phonebooksrc.c

int main(){
    system("cls");
	system("color A");
	password();
	getch();
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
