#include <iostream>
#include <windows.h>
using namespace std;
main()
{
    string type, month;
    float num;

    cout << "Enter month of stay: ";
    cin >> month;
    cout << "Enter number of your stays: ";
    cin >> num;

    if (month == "may" || month == "october")
    {
        if (num <= 7)
        {
            cout << "Studio: " << (num * 50) << "$" << endl;
            cout << "Apartment: " << (num * 65) << "$" << endl;
        }
        else if (num > 7 && num <= 14)
        {
            cout << "Studio: " <<(num*50)-( (num * 50) * 0.05) << "$" << endl;
            cout << "Apartment: " << (num * 65) << "$" << endl;
        }
        else
        {
            cout << "Studio: " << (num*50)-((num * 50) * 0.30) << "$" << endl;
            cout << "Apartment: " << (num*65)-((num * 65) * 0.10) << "$" << endl;
        }
    }
    else if (month == "june" || month == "september")
    {

        if (num <= 14)
        {
            cout << "Studio: " << (num * 75.20) << "$" << endl;
            cout << "Apartment: " << (num * 68.70) << "$" << endl;
        }
        else
        {
            cout << "Studio: " <<(num*75.20)-( (num * 75.20) * 0.20) << "$" << endl;
            cout << "Apartment: " << (num * 68.70) * 0.10 << "$" << endl;
        }
    }
    else if (month == "july" || month == "august")
    {
        if (num <= 14)
        {
            cout << "Studio: " << (num * 76) << "$" << endl;
            cout << "Apartment: " << (num * 77) << "$" << endl;
        }
        else
        {
            cout << "Studio: " << (num * 76) << "$" << endl;
            cout << "Apartment: " << (num * 77)-((num * 77) * 0.10) << "$" << endl;
        }
    }
    else
    {
        cout << "Enter ( june/july/august/september/october/may)" << endl;
    }
}