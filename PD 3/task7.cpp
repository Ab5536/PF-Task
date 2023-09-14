#include <iostream>
using namespace std;
main()
{
string name;
float adultticketprice,childticketprice,ticketsold,adultticketsold,childticketsold,percentage;
float totalamount,Profit;
cout <<"Enter the name of Movie: ";
cin >>name;
cout <<"Enter the price  of adult movie ticket: ";
cin >>adultticketprice;
cout <<"Enter the price of child Movie ticket: ";
cin >>childticketprice;
cout <<"Enter the number of ticket sold to adult: ";
cin >>adultticketsold;
cout <<"Enter the number of ticket sold to children: ";
cin >>childticketsold;
cout <<"Enter the percentage of the amount donated to the charity: ";
cin >>percentage;
totalamount=(adultticketprice*adultticketsold)+(childticketprice*childticketsold);
cout <<"Total Amount from Movie: "<<totalamount<<endl;
Profit=totalamount-((percentage/100)*totalamount);
cout <<"The remaining amount achieved from the movie on the Screen: "<<Profit;













}