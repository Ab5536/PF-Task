#include <iostream>
using namespace std;
string evenodd(int num1);
main()
{
    int num1;
    cout << "Enter Number : ";
    cin >> num1;

    cout << evenodd(num1) << " Number" << endl;
}

string evenodd(int num1)
{
    string check;

    if (num1 % 2 == 0)
    {
        check = "Even";
    }
    else
    {
        check = "Odd";
    }
    return check;
}