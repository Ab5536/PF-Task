#include <iostream>
using namespace std;
main()
{
int dd,mm,yyyy,dob,currentyear;
cout <<"Enter the Day you were born in dd: ";
cin  >>dd;
cout <<"Enter the month you were born in mm format: ";
cin  >>mm;
cout <<"Enter the Year you were born in yyyy format: ";
cin  >>yyyy;
cout  <<"Your Date of Birth : "<<dd<<"-"<<mm<<"-"<<yyyy<<endl;
cout <<"Enter current Year: ";
cin  >>currentyear;
dob=currentyear-yyyy;
cout <<"Your age in years:"<<dob;
}