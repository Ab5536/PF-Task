#include <iostream>
using namespace std;
main()
{
int Final;
int sum,suma,mul,mula,num1,num2,num3,num4,num1a,num2a,num3a,num4a;
int digit4,digit4a;
cout <<"Enter 4 digit number 1: ";
cin >>digit4;
cout <<"Enter 4 digit number 2: ";
cin >>digit4a;
num1=digit4%10;
digit4=digit4/10;
num2=digit4%10;
digit4=digit4/10;
num3=digit4%10;
digit4=digit4/10;
num4=digit4%10;

num1a=digit4a%10;
digit4a=digit4a/10;
num2a=digit4a%10;
digit4a=digit4a/10;
num3a=digit4a%10;
digit4a=digit4a/10;
num4a=digit4a%10;

sum=num1+num3;
suma=num1a+num3a;
mul=num2*num4;
mula=num2a*num4a;
Final=sum+suma+mul+mula;
cout <<"Sum of 1st and 2nd integer: "<<Final<<endl;

}