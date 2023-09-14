#include <iostream>
#include <windows.h>
using namespace std;
main()
{
    string fruit, day;
    float quantity;
    cout << "Enter name of the Fruit :";
    cin >> fruit;
    cout << "Enter  Day in lowercase : ";
    cin >> day;
    cout << "Enter Quantity you want : ";
    cin >> quantity;

    if (day == "sunday" || day == "saturday")
    {

        if (fruit == "banana")
        {
            cout << "Price : " << quantity * 2.70 << endl;
        }
        else if (fruit == "apple")
        {
            cout << "Price : " << quantity * 1.25 << endl;
        }
        else if (fruit == "orange")
        {
            cout << "Price : " << quantity * 0.90 << endl;
        }
        else if (fruit == "grapefruit")
        {
            cout << "Price : " << quantity * 1.60 << endl;
        }
        else if (fruit == "kiwi")
        {
            cout << "Price : " << quantity * 3.00 << endl;
        }
        else if (fruit == "pineapple")
        {
            cout << "Price : " << quantity * 5.60 << endl;
        }
        else if (fruit == "grapes")
        {
            cout << "Price : " << quantity * 4.20 << endl;
        }
        else
        {
            cout << "Enter Correct name of Fruit " << endl;
        }
    }

    else if (day == "monday" || day == "tuesday" || day == "wednesday" || day == "thursday" || day == "friday")
    {

        if (fruit == "banana")
        {
            cout << "Price : " << quantity * 2.50 << endl;
        }
        else if (fruit == "apple")
        {
            cout << "Price : " << quantity * 1.20 << endl;
        }
        else if (fruit == "orange")
        {
            cout << "Price : " << quantity * 0.85 << endl;
        }
        else if (fruit == "grapefruit")
        {
            cout << "Price : " << quantity * 1.45 << endl;
        }
        else if (fruit == "kiwi")
        {
            cout << "Price : " << quantity * 2.70 << endl;
        }
        else if (fruit == "pineapple")
        {
            cout << "Price : " << quantity * 5.50 << endl;
        }
        else if (fruit == "grapes")
        {
            cout << "Price : " << quantity * 3.85 << endl;
        }
        else
        {
            cout << "Enter Correct name of Fruit " << endl;
        }
    }
    else
    {
        cout << "Enter Correct Day" << endl;
    }
}