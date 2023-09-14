#include <iostream>
#include <windows.h>
using namespace std;
void reverse(string condition);

main()
{
string condition;
cout<<"Enter Condition in lower case(True/False): ";
cin >>condition;
reverse(condition);
}
void reverse(string condition){
if(condition=="true")
 {
cout<<"			False";
 }
if(condition=="false")
 {
cout<<"			True";
 }
}