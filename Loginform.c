#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>

#define ESC 27
#define F1 59
#define F2 60

//defines gotoxy() func for ansi c compilers
void gotoxy(short x,short y){
	COORD pos= {x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}

void delay(int delay){
	int now=time(NULL);
	int later= now+delay;
	while(now<=later)now=time(NULL);
}

void signup(void);
void login(void);

struct{
	char password[20];
	char username[20];
}s;

FILE *fp;


int main(){
	int ch;
	while(1){
		system("cls");
		gotoxy(28,5);
		printf("..........WELCOME.........");
		gotoxy(28,9);
		printf("Press F1 for login");
		gotoxy(28,11);
		printf("Press F2 for signup");
		gotoxy(28,13);
		printf("Press esc for exit");
		gotoxy(20,15);
		printf(".............*.*.*.*.*..............");
		getch();
		ch=getch();
		
		switch(ch){
			
			case F1:
				system("cls");
				gotoxy(10,14);
				for(int i=0;i<40;i++){
					printf("..");
					delay(40);
				}
				login();
				break;
				
			case F2:
				system("cls");
				gotoxy(10,14);
				for(int i=0;i<40;i++){
					printf("..");
					delay(40);
				}
				signup();
				break;
				
				case ESC:
				exit(0);
				break;	
		}
	}
	
	return 0;
}

void signup(void){
	char c;
	int i;
	fp= fopen("loginform.bin","ab");
	system("cls");
	gotoxy(23,5);
	printf("...................SignUp..................");
	gotoxy(23,7);
	printf("Set Username      :");
	gets(s.username);
	
	gotoxy(23,9);
	printf("Set Password      :");
	for(i=0;c=getch()!=13;i++){
		s.password[i]=c;
	}
	gotoxy(23,11);
	printf("Press Enter to continue");
	
	if(getch()==13){
		fwrite(&s,sizeof(s),1,fp);
		gotoxy(23,13);
		cprintf("\n Information Saved");
	}
	else
	return;
	fclose(fp);
	
	getch();
}

void login(void){
	int c,i;
	char username[20];
	char pass[20];
	char chkp;
	char chku;
	
	system("cls");
	gotoxy(23,5);
	printf("..............Login..............");
	gotoxy(23,7);
	
	fp=fopen("loginform.bin","rb");
	
	printf("Enter Username :");
	gets(s.username);
	printf("Enter Password:");
	
	for(int i=0;c=getch()!=13;i++){
		pass[i]=c;
		printf("*");
	}
	pass[i]='\0';
	
	while(!feof(fp)){
		fread(&s,sizeof(s),1,fp);
		
		chku=strcmp(username,s.username);
		chkp=strcmp(pass,s.password);
		
		if(chku!=0 && chkp==0){
			printf("Invalid Username!");
			break;
		}
		else if(chku==0 && chkp!=0){
			printf("Invalid Password!");
			break;
		}
		else if(chku==0 && chkp==0){
			system("cls");
			gotoxy(20,10);
			printf("...Hello %s, Welcome Here", s.username);
			break;
		}
	}
}

