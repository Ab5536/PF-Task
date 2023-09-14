#include <iostream>
#include <windows.h>
void maze();
void playermove(int x,int y);
void gotoxy(int x,int y);
using namespace std;
main()
{
system ("cls");
int x=5;
int y=5;
maze();
playermove(x,y);
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