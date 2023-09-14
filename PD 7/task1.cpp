#include <iostream>
using namespace std;
main()
{
int x=1,num,y;
cout<<"Enter a number: ";
cin>>num;
while(x<=num){

for(y=1 ; y<=x ; y++){
    cout<<"*";
}
cout<<endl;
x++;


}

}