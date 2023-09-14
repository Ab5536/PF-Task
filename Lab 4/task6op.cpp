#include <iostream>
using namespace std;
float payable(float amount, string day);
main()
{
    string day;
    float amount, num2;
    cout << "Enter Total Purchase Amount : ";
    cin >> amount;
    cout << "Enter Day in Lowercase: ";
    cin >> day;
    cout << "Total Payable Amount : " << payable(amount, day) << endl;
}

float payable(float amount, string day)
{
    if (day == "sunday")
        return amount - (amount * .10);
    else
        return amount;
}
