#include <iostream>
#include <windows.h>
using namespace std;
main()
{

    int hh, mm, hour, minute, hour1, minute1, hour2, newtime, hour3;
    while (true)
    {
        cout << "Enter exam Starting time (hours 0-23 )....(hh):";
        cin >> hh;
        cout << "Enter exam Starting time (minutes 0-59)....(hh): ";
        cin >> mm;
        cout << "Enter Hour of Arrival: ";
        cin >> hour;
        cout << "Enter minutes of Arrival: ";
        cin >> minute;
        hour1 = (hh * 60) + mm;
        hour2 = (hour * 60) + minute;
        if (hour1 == hour2){
cout<<"On Time" <<endl;
        }
        else if (hour1 > hour2)
        {
            newtime = hour1 - hour2;
            hour3 = newtime / 60;
            minute1 = newtime % 60;
            if (minute1 < 10 && hour3 >= 1)
            {
                cout << "Early" << endl
                     << hour3 << ":0" << minute1 << " hours before the start. " << endl;
            }
            else if (hour3 == 0)
            {
if(minute1<30){
                cout << "On Time" << endl
                     << minute1 << " minutes before the start. " << endl;}
                     else{
                      cout << "Early" << endl
                     << minute1 << " minutes before the start. " << endl;}
            }
            else
            {

                cout << "Early" << endl
                     << hour3 << ":" << minute1 << " hours before the start" << endl;
            }
        }

        else if (hour2 > hour1)
        {
            newtime = hour2 - hour1;
            hour3 = newtime / 60;
            minute1 = newtime % 60;

            if (minute1 < 10 && hour3 >= 1)
            {
                cout << "Late" << endl
                     << hour3 << ":0" << minute1 << " hours after the start. " << endl;
            }
            else if (hour3 == 0)
            {
                cout << "Late" << endl
                     << minute1 << " minutes after the start. " << endl;
                  
            }
            else
            {

                cout << "Late" << endl
                     << hour3 << ":" << minute1 << " hours after the start" << endl;
            }
        }
        else
        {
            cout << "Enter Correct Values.";
        }
    }
}
