#include <iostream>
#include <windows.h>
#include <cmath>
#include <conio.h>
using namespace std;

main()
{
    int num;
     cout << "Enter a Number : ";
        cin >> num;
    while (num <= 0)
    {

        cout << "Error ! Insert a number greater than zero." << endl;
        cout << "Enter Number Again : ";
        cin >> num;
    }

    getch();
}
