#include <iostream>
using namespace std;
main()
{
    int roll_no;
    string name;
    cout << "Enter your  Name: ";
    cin >> name;
    cout << "Enter Your Roll Number : ";
    cin >> roll_no;
    if (roll_no == 501)
    {
        if (name == "Ali" || name=="ali")
            cout << "Congratulations" << endl;
    }
    else
    {
        cout << "Enter Again" << endl;
    }
}