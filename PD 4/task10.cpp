#include <iostream>
using namespace std;
void discount(float ticketprice,string countryname);
int main()
{
float ticketprice;
string countryname;
while(true){
cout <<"Enter your country name in lower case: ";
cin >>countryname;
cout<<"Enter Ticket Price in dollars : ";
cin>>ticketprice;
discount(ticketprice,countryname);
}
return 0;

}

void discount(float ticketprice,string countryname){
if(countryname=="ireland")
	{
	cout<<"Price of the ticket after discount for Ireland: "<<ticketprice-(ticketprice*0.1)<<endl;
	}
if(countryname=="pakistan")
	{
	cout<<"Price of the ticket after discount for Pakistan: "<<ticketprice-(ticketprice*0.05)<<endl;
	}
if(countryname=="india")
	{
	cout<<"Price of the ticket after discount for India: "<<ticketprice-(ticketprice*0.20)<<endl;
	}
if(countryname=="england")
	{
	cout<<"Price of the ticket after discount for England: "<<ticketprice-(ticketprice*0.30)<<endl;
	}
if(countryname=="canada")
	{
	cout<<"Price of the ticket after discount for Canada: "<<ticketprice-(ticketprice*0.45)<<endl;
	}


}