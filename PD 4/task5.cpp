#include <iostream>
#include <Windows.h>
void gotoxy();
using namespace std;
main()
{

system("cls");
gotoxy();
cout<<"ABDULLAH ZAHID";


}
void gotoxy(){
COORD coordinates;
coordinates.X=50;
coordinates.Y=1;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}