#include"phonebook.h"
#include <stdio.h>
#include <conio.h>
#include<ctype.h>
#include <windows.h>
#include <direct.h>
#include <stdlib.h>
void modify(){
	FILE *fptr,*fptr1;
	char name[100],address[100],emailID[100],emailID1[100],address1[100],name1[100],gen[8],gen1[8];
	int res,f=0;
	double contact,contact1;
	fptr=fopen("jayavarshini.txt","r");
	fptr1=fopen("temp.txt","a");
	system("cls");

	printf("Enter the name: ");
	gets(name1);
	system("cls");
	while(fscanf(fptr,"%s %s %s %s %lf\n",name,address,gen,emailID,&contact)!=EOF){
		res=strcmp(name,name1);
		if(res==0)
		{
			f=1;

	printf("Change SECTION OPENED");

			printf("Enter the new address:");
			scanf("%s",address1);

			printf("Enter the gen:");
			scanf("%s",gen1);

			printf("Enter the new emailID:");
			scanf("%s",emailID1);

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
