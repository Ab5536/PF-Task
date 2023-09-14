#include <iostream>
#include <windows.h>
void maze();
void playermove(int x,int y);
void gotoxy(int x,int y);
using namespace std;
main()
{
system("cls");
maze();
int x=5,y=5;
while(true)
{
	playermove(x,y);
	if(x<20){ 
		x=x+1;
	}
	if(x==20){
		gotoxy(x-1,y);
		cout<<" ";
		x=5;
	 }
 }
}
void gotoxy(int x,int y){
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}

void playermove(int x,int y){
gotoxy(x-1,y);
cout <<" ";
gotoxy(x,y);
cout <<"P";
Sleep(200);
}




void maze(){
cout<<"##################################################"<<endl;
cout<<"#                                                #"<<endl;
cout<<"#                                                #"<<endl;
cout<<"#                                                #"<<endl;
cout<<"#                                                #"<<endl;
cout<<"#                                                #"<<endl;
cout<<"#                                                #"<<endl;
cout<<"#                                                #"<<endl;
cout<<"#                                                #"<<endl;
cout<<"#                                                #"<<endl;
cout<<"#                                                #"<<endl;
cout<<"#                                                #"<<endl;
cout<<"#                                                #"<<endl;
cout<<"#                                                #"<<endl;
cout<<"#                                                #"<<endl;
cout<<"##################################################"<<endl;

}