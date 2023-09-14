#include <iostream>
#include <windows.h>
void gotoxy(int x,int y);
void printa(int x,int y);
void printw(int x,int y);
void printi(int x,int y);
void printS(int x,int y);
using namespace std;
 main()
{

system ("cls");
int x=40,y=1;


printa(x,y);
if(y<5){
	y=y+1;
		}
printw(x,y);
if(y<5){
	y=y+1;
	}
printa(x,y);
if(y<5){
	y=y+1;
	}
printi(x,y);
if(y<5){
	y=y+1;
	}
printS(x,y);




}
void printa(int x,int y){
gotoxy(x,y);
cout<<"A"<<endl;
	
	}
void printw(int x,int y){
gotoxy(x,y);
cout<<"W";
	
 }
void printi(int x,int y){
gotoxy(x,y);
cout<<"I";
	
}
void printS(int x,int y){
gotoxy(x,y);
cout<<"S";
	}
void gotoxy(int x,int y){
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}
