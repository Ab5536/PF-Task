#include <iostream>
using namespace std;
main()
{
float costperPound,costpersquarefoot;
float size,costofBag,area;
cout <<"Enter Size of Fertilizer Bag in pounds: ";
cin  >>size;
cout <<"Enter the Cost of bag: ";
cin >>costofBag;
cout <<"Enter the area in square feet that can be covered by the bag: ";
cin >>area;
costperPound=costofBag/size;
cout <<"price of the fertilizer per pound "<<costperPound<<endl;
costpersquarefoot=costperPound*(size/area);
cout <<"The cost of fertilizing the area per square foot: "<<costpersquarefoot;












}