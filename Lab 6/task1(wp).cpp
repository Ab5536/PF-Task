#include <iostream>
#include <conio.h>
using namespace std;
main()
{
int cost;
string brand;
cout<<"Enter cost of the dress: ";
cin>>cost;
cout<<"Enter brand of the dress in uppercase: ";
cin>>brand;
if(cost<1500 && brand=="MTJ"){
    cout<<"You can buy the dress"<<endl;
}
else{
    cout<<"You are not able to buy the dress"<<endl;
}
getch();
}