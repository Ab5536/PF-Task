#include <iostream>
using namespace std;
main()
{

float vegetablecoins,fruitcoins,vegetablekg,fruitkg;
float totalamountincoins,amountinrps;
cout <<"Enter the number of coins earned from one kg vegetable: ";
cin >>vegetablecoins;
cout <<"Enter the number of coins earned from one kg Fruit: ";
cin >>fruitcoins;
cout <<"Enter the number of kilogram of vegetable that you sold: ";
cin >>vegetablekg;
cout <<"Enter the number of kilogram of fruits that you sold: ";
cin >>fruitkg;
totalamountincoins=(vegetablecoins*vegetablekg)+(fruitcoins*fruitkg);

cout <<"one Rupees = 1.94 coins  "<<endl;
amountinrps=totalamountincoins/1.94;
cout <<"The  amount achieved from the Vegetable and fruits in rupees is: "<<amountinrps<<" rupees";













}