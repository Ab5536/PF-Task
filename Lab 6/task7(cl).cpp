#include <iostream>
#include <conio.h>
using namespace std;
main()
{
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    if(number>50){
        cout<<"You have Passed"<<endl;
    }
    else {
        cout<<"You have Failed"<<endl;
    }
    getch();
}