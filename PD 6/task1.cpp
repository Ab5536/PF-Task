#include <iostream>
#include <windows.h>
using namespace std;
main()
{
    string temprature, humid;
        cout << "Enter Temprature (warm/cold): ";
    cin >> temprature;

    cout << "Enter Humidity (dry/humid): ";
    cin >> humid;

    if (temprature == "warm")
    {
        if (humid == "dry")
        {
            cout << "Play Tennis" << endl;
        }
        else
        {
            cout << "Swim" << endl;
        }
    }
    else if (temprature == "cold")
    {
        if (humid == "dry")
        {
            cout << "Play Basketball" << endl;
        }
        else
        {
            cout << "Watch TV" << endl;
        }
    }
    else {
        cout<<"Enter Correct Temprature"<<endl;
    }
}