#include <iostream>
#include <windows.h>
using namespace std;
main()
{
    string month;
    int date;
    cout << "Enter Your Month of Birth: ";
    cin >> month;
    cout << "Enter Date of Birth (__):  ";
    cin >> date;

    cout << "Your Date of Birth is " << date << " " << month << endl;
    if ((month == "march" && date >= 21) || (month == "april" && date <= 19))
    {

        cout << "Zodiac Sign : Aries" << endl;
    }
    else if ((month == "april" && date >= 20) || (month == "may" && date <= 20))
    {

        cout << "Zodiac Sign : Taurus" << endl;
    }
    else if ((month == "may" && date >= 21) || (month == "june" && date <= 20))
    {

        cout << "Zodiac Sign : Gemini " << endl;
    }
    else if ((month == "june" && date >= 21) || (month == "july" && date <= 22))
    {

        cout << "Zodiac Sign : Cancer" << endl;
    }
    else if ((month == "july" && date >= 23) || (month == "august" && date <= 22))
    {

        cout << "Zodiac Sign : Leo" << endl;
    }
    else if ((month == "august" && date >= 23) || (month == "september" && date <= 22))
    {

        cout << "Zodiac Sign : VIRGO" << endl;
    }
    else if ((month == "september" && date >= 23) || (month == "october" && date <= 22))
    {

        cout << "Zodiac Sign : Libra" << endl;
    }
    else if ((month == "october" && date >= 23) || (month == "november" && date <= 21))
    {

        cout << "Zodiac Sign : Sorpio" << endl;
    }
    else if ((month == "november" && date >= 22) || (month == "december" && date <= 21))
    {

        cout << "Zodiac Sign : Sagittarius" << endl;
    }
    else if ((month == "december" && date >= 22) || (month == "january" && date <= 19))
    {

        cout << "Zodiac Sign : Capricorn" << endl;
    }
    else if ((month == "january" && date >= 20) || (month == "february" && date <= 18))
    {

        cout << "Zodiac Sign : Aquarius" << endl;
    }
    else if ((month == "february" && date >= 19) || (month == "march" && date <= 20))
    {

        cout << "Zodiac Sign : Pisces" << endl;
    }
    else
    {
        cout << "Enter Month in lowercase." << endl;
    }
}