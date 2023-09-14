#include <iostream>
#include <windows.h>
void isEqual(int num1,int num2);
using namespace std;
main()
{
int num1,num2;
cout <<"Enter First Number: ";
cin >>num1;
cout <<"Enter Second Number: ";
cin >>num2; 
isEqual(num1,num2);
}

void isEqual(int num1,int num2){
if(num1==num2)
{cout<<"True"<<endl;}
if(num1!=num2)
{cout<<"False"<<endl;}

}