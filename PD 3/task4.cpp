#include <iostream>
using namespace std;
main()
{
string name;
float subject1,subject2,subject3,subject4,subject5,percentage;
cout <<"Enter your marks per subject out of 100"<<endl;
cout <<"Enter your name: ";
cin  >>name;
cout <<"Enter marks of subject 1: ";
cin >>subject1;
cout <<"Enter marks of subject 2: ";
cin >>subject2;
cout <<"Enter marks of subject 3: ";
cin >>subject3;
cout <<"Enter marks of subject 4: ";
cin >>subject4;
cout <<"Enter marks of subject 5: ";
cin >>subject5;
percentage=((subject1+subject2+subject3+subject4+subject5)*100)/500;
cout <<"Name =  " << name ;
cout <<endl;
cout <<"Your percentage of 5 subjects are"<<percentage;












}