#include <iostream>
#include <windows.h>
void gotoxy(int x,int y);
using namespace std;
void maze();
main()
{
system("cls");
int x=40,y=2;
maze();

while(true){
 gotoxy(x,y+1);
 cout<<"P";
 gotoxy(x,y);
 cout<<" ";
 Sleep(150);

	if(y<10)
	{y=y+1;
	}


	if(y>=10){
        gotoxy(x,y);
	cout<<" ";
	y=2; 

	}
}

}



void gotoxy(int x,int y){
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);

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