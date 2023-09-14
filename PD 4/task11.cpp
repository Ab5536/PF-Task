#include <iostream>
#include <windows.h>
using namespace std;
main()
{
int speed;
cout<<"Enter the speed of car in km/h: ";
cin >>speed;
if(speed>100)
{
cout<<"...You will be Challenged"<<endl;
}
if(speed<=100)
{
cout<<"Perfect...You are going Great"<<endl;
}


}