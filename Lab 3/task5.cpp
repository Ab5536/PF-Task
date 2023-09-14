#include <iostream>
using namespace std;
main(){

string name;
float matric;
float matriculation;
float inter; 
float intermediate ;
float ecat; 
float test;
float Aggregate;
cout <<"Enter your name : ";
cin  >> name;
cout <<"Enter matric marks : ";
cin >> matric;
cout  <<"Enter intermediate marks:";
cin  >>inter;
cout  <<"Enter Ecat marks:";
cin >>ecat;
matric=(matric*100)/1100;
matriculation=(0.10)*matric;


inter=(inter*100)/550;
intermediate=(0.40)*inter;


ecat=(ecat*100)/400;
test=(0.50)*ecat;



Aggregate = (matriculation+test+intermediate);
cout <<"Aggregate is: "<<Aggregate<<endl;









}