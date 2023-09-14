#include <iostream>
using namespace std;
string checkspeed(float speed);
main()
{

    float speed;
    cout << "Enter Speed in numbers : ";
    cin >> speed;

    cout << checkspeed(speed) << endl;
}

string checkspeed(float speed)
{
    string check;
    if (speed <= 10)
    {
        check = "SLOW";
    }
    if (speed > 10 && speed <= 50)
    {
        check = "Average";
    }
    if (speed > 50 && speed <= 150)
    {
        check = "Fast";
    }
    if (speed > 150 && speed <= 1000)
    {
        check = "Ultra Fast";
    }
    if (speed > 1000)
    {
        check = "Extremely Fast";
    }

    return check;
}
