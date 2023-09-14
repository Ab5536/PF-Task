#include <iostream>
#include <windows.h>
using namespace std;
main()
{
    string name;
    float sub1, sub2, sub3, sub4, sub5;

    cout << "Enter Your Name: ";
    cin >> name;
    cout << "Enter Marks of English:  ";
    cin >> sub1;
    cout << "Enter Marks of Maths:  ";
    cin >> sub2;
    cout << "Enter Marks of Chemistry:  ";
    cin >> sub3;
    cout << "Enter Marks of Social Science:  ";
    cin >> sub4;
    cout << "Enter Marks of Biology:  ";
    cin >> sub5;
    float percent = ((sub1 + sub2 + sub3 + sub4 + sub5) * 100) / 500;
    cout << "Your name is " << name << endl;
    cout << "Obtained Marks out of 500 = " << (sub1 + sub2 + sub3 + sub4 + sub5) << endl;
    cout << "Percentage= " << percent << endl;
    if (percent > 90 && percent <= 100)
    {

        cout << "Grade = A+" << endl;
    }
    else if (percent >= 80 && percent < 90)
    {
        cout << "Grade = A" << endl;
    }
    else if (percent >= 70 && percent < 80)
    {
        cout << "Grade = B+" << endl;
    }
    else if (percent >= 60 && percent < 70)
    {
        cout << "Grade = B" << endl;
    }
    else if (percent >= 50 && percent < 60)
    {
        cout << "Grade = C" << endl;
    }
    else
    {
        cout << "Your Percentage is Less than 50%" << endl;
    }
}