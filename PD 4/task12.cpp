#include <iostream>
using namespace std;
main()
{
int redrose,whiterose,tulips;
float profitredrose,profitwhiterose,profittulips,totalamount;

cout <<"Enter number of red roses you sold: ";
cin>>redrose;
cout <<"Enter number of white roses you sold: ";
cin>>whiterose;
cout <<"Enter number of tulips you sold: ";
cin>>tulips;
profitredrose=redrose*2.00;
profitwhiterose=whiterose*4.10;
profittulips=tulips*2.50;
totalamount=profittulips+profitwhiterose+profitredrose;
cout <<"Orignal Price: "<<totalamount;
	if(totalamount>200)	
	{
	totalamount=totalamount-(totalamount*0.20);
	cout <<"Price after discount: "<<totalamount;
	}
}