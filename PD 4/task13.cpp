#include <iostream>
void iffunction(int playtime);
using namespace std;
main()
{
int holidays,workingdays,playtime;
cout<<"Enter number of holidays in a year out of 365:  ";
cin>>holidays;
workingdays=365-holidays;
playtime=(workingdays*63)+(holidays*127);
cout<<"Time for games: "<<playtime<<endl;
iffunction(playtime);
}



void iffunction(int playtime){
if(playtime<30000){
int minutes,hours,tosolve=30000-playtime;
hours=tosolve/60;
minutes=tosolve%60;
cout<<"Tom sleeps well,Difference from norm is : "<<tosolve<<" minutes. or "<<hours<<" hours and "<<minutes<<" minutes."<<endl;
 }
if(playtime>30000){
int hours,minutes,tosolve1=playtime-30000;
hours=tosolve1/60;
minutes=tosolve1%60;
cout<<"Tom will run away,Difference from norm is : "<<tosolve1<<" minutes. or "<<hours<<" hours and "<<minutes<<" minutes."<<endl;

 }


}