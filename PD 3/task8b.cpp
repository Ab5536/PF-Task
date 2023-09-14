#include <iostream>
using namespace std;
main()
{
int sum,num1,num2,num3,num4;
int digit4;
cout <<"Enter 4 digit number: ";
cin >>digit4;
num1=digit4%10;
digit4=digit4/10;
num2=digit4%10;
digit4=digit4/10;
num3=digit4%10;
digit4=digit4/10;
num4=digit4%10;
sum=num1+num2+num3+num4;

cout <<"SUM= "<<sum;











}