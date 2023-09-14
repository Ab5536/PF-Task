#include <iostream>
using namespace std;
main()
{
int student1,student2,student3,totalstudent1,totalstudent2,totalstudent3;

cout <<"Enter Total marks: ";
cin  >>totalstudent1;
cout <<"Enter obtained marks: ";
cin  >>student1;
student1=(student1*100)/totalstudent1;

cout <<"Enter Total marks: ";
cin  >>totalstudent2;
cout <<"Enter obtained marks: ";
cin  >>student2;
student2=(student2*100)/totalstudent2;

cout <<"Enter Total marks: ";
cin  >>totalstudent3;
cout <<"Enter obtained marks: ";
cin  >>student3;
student3=(student3*100)/totalstudent3;

cout <<"Average of Class = "<<(student1+student2+student3)/3;




}