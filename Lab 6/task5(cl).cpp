#include <iostream>
#include <conio.h>
using namespace std;
main()
{
    char lecture, go;
    cout << "Do you have class today (y/n): ";
    cin >> lecture;
    cout << "Are your friends going to university (y/n): ";
    cin >> go;
    if (go == 'y' && lecture == 'y')
    {
        cout << "You are also going" << endl;
    }
    else
    {
        cout << "You are not going" << endl;
    }
    getch();
}