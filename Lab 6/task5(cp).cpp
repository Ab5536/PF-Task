#include <iostream>
using namespace std;
float lowestprice(int kilometers, string time);
main()
{
    int kilometers;
    string time;
    cout << "Enter numbers of Kilometers : ";
    cin >> kilometers;
    cout << "Enter Time of Day (day/night) : ";
    cin >> time;

    cout << "Lowest Price: " << lowestprice(kilometers, time) << endl;
}

float lowestprice(int kilometers, string time)
{
    float check;
    if (kilometers < 20)
    {
        if (time == "day")
        {
            check = kilometers * 0.79 + 0.70;
        }
        else
        {
            check = kilometers * 0.90 + 0.70;
        }
    }
    if (kilometers >= 20 && kilometers < 100)
    {
        check = kilometers * 0.09;
    }
    if (kilometers >= 100)
    {
        check = kilometers * 0.06;
    }

    return check;
}
