#include <iostream>
#include <windows.h>
using namespace std;
main()
{
    char customer, time;
    int num;
    cout << "Enter which type of customer you are (Resident/premium), slect (r/p): ";
    cin >> customer;
    cout << "Enter the time of Day (d/n): ";
    cin >> time;
    cout << "Enter number of minutes you used the service : ";
    cin >> num;
    if (num >= 1)
    {
        if (customer == 'p' || customer == 'P')
        {

            if (time == 'd' || time == 'D')
            {
                if (num > 75)
                {
                    num = num % 75;
                    cout << "Your charges are :" << 25 + (num * 0.1) << "$" << endl;
                }
                else
                {
                    cout << "Your charges are : 25$";
                }
            }
            else if (time == 'n' || time == 'N')
            {
                if (num > 100)
                {
                    num = num % 100;
                    cout << "Your charges are :" << 25 + (num * 0.05) << "$" << endl;
                }
                else
                {
                    cout << "Your charges are : 25$";
                }
            }
            else
            {
                cout << "Enter correct time" << endl;
            }
        }
        else if (customer == 'r' || customer == 'R')
        {
            if (num > 50)
            {
                num = num % 50;
                cout << "Your charges are : " << 10 + (num * 0.20) << "$" << endl;
            }
            else
            {
                cout << "Your charges are : 10$" << endl;
            }
        }
        else
        {
            cout << "Enter Correct Type of Service" << endl;
        }
    }
}