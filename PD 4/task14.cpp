#include <iostream>
using namespace std;
void printmenu();
float agregate(float matric,float ecat,float inter);
void compare(string name1,string name2,float std1,float std2);
int main()
{
float std1,std2;
string name,name1,name2;
float ecat,inter,matric;
printmenu();
cout<<"Enter your name: ";
cin>>name;
cout<<"Entr your Matric marks: ";
cin>>matric;
cout<<"Entr your intermediate marks: ";
cin>>inter;
cout<<"Enter your ecat marks: ";
cin>>ecat;
cout<<"Your name is : "<<name<<endl;
cout<<"Your Aggregate is: "<<agregate(matric,ecat,inter)<<endl;
cout<<"Enter name of std1: ";
cin>>name1;
cout<<"Enter ecat marks of std1: ";
cin>>std1;
cout<<"Enter name of std2: ";
cin>>name2;
cout<<"Enter ecat marks of std2: ";
cin>>std2;
compare(name1,name2,std1,std2);
return 0;
}

float agregate(float matric,float ecat,float inter){
float aggregate;
float matriculation=(matric*100)/1100;
matriculation=matriculation*0.30;
float intermediate=(inter*100)/550;
intermediate=intermediate*0.30;
float test=(ecat*100)/400;
test=test*0.30;
aggregate=matriculation+intermediate+test;
return aggregate;
}
void compare(string name1,string name2,float std1,float std2)
{
if(std1>std2)
 {
cout<<"Roll number 1 ="<< name1<<" Marks("<<std1<<")"<<endl;
cout<<"Roll number 2 ="<< name2<<" Marks("<<std2<<")"<<endl;
 }
if(std2>std1)
 {

cout<<"Roll number 1 ="<< name2<<" Marks("<<std2<<")"<<endl;
cout<<"Roll number 2 ="<< name1<<" Marks("<<std1<<")"<<endl;
 }
if(std1==std2)
 {
cout<<"Roll number 1 ="<< name1<<" Marks("<<std1<<")"<<endl;
cout<<"Roll number 2 ="<< name2<<" Marks("<<std2<<")"<<endl;
 }
}





void printmenu(){

cout<<"********************************************"<<endl;
cout<<"********************************************"<<endl;
cout<<"**                                        **"<<endl;
cout<<"**                                        **"<<endl;
cout<<"**        UNIVERSITY ADMISSION            **"<<endl;
cout<<"**          MANAGMENT SYSTEM              **"<<endl;
cout<<"**                                        **"<<endl;
cout<<"**                                        **"<<endl;
cout<<"**                                        **"<<endl;
cout<<"********************************************"<<endl;
cout<<"********************************************"<<endl;


int option;

cout << "   Select one of the following options:                   " <<endl;
cout << "                                                          " <<endl;
cout << "  1: Enter the detail of first Student.                   " <<endl;
cout << "  2: Enter the detail of second Student:                  " <<endl;
cout << "  3: Calculate the Aggregate of 1st Student:              " <<endl;
cout << "  4: Calculate the Aggregate of 2nd Student:              " <<endl;
cout << "                                                          " <<endl;
cout << "   Your option: " <<endl;
cin >>option;
}