#include <iostream>
using namespace std;
float discount(float amount, string days, string month);
main()
{
    string days, month;
    float amount;
    cout << "Enter Total Amount : ";
    cin >> amount;
    cout << "Enter Day in lowercase: ";
    cin >> days;
    cout << "Enter Month in lowecase: ";
    cin >> month;
    cout << "Total Payable Amount: " << discount(amount, days, month) << endl;
}

float discount(float amount, string days, string month)
{
    float check = amount;
    if (days == "sunday" && (month == "october" || month=="march" || month=="august"))
    {
        check = amount - (amount * 0.1);
    }
    if (days == "monday" && (month == "november" || month=="december" ))
    {
        check = amount - (amount * 0.05);
    }
    return check;
}
