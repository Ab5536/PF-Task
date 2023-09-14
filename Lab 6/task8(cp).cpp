#include <iostream>
#include <cmath>
using namespace std;
int timesheplayed(float holiday, string year);
main()
{
    float holiday, travel;
    string year;
    cout << "Enter type of Year in lowercase (leap/normal): ";
    cin >> year;
    cout << "Enter number of Holidays other than Weekends : ";
    cin >> holiday;
    cout << "Enter number of visits to hometown on weekends : ";
    cin >> travel;

    cout << "Total Number of time he played in Year : " << timesheplayed(holiday, year) << endl;
}

int timesheplayed(float holiday, string year)
{
    int time;
    float check;
    check = 36 + ((0.67) * holiday);

    if (year == "leap")
    {
        check = check + (check * 0.15);
        time = floor(check);
        return time;
    }
    else if (year == "normal")
    {
        time = floor(check);
        return time;
    }
    else
    {
        return 0;
    }
}
