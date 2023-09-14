#include <fstream>
#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
main()
{
    int count = 0;
    string view;
    fstream fileto;
    fileto.open("textfile.txt", ios::in);
    while (!fileto.eof())
    {
        fileto >> view;
        if (view.length() == 4)
        {
            cout << view << " ";
        }
    }
    fileto.close();
    // cout << count;
    getch();
}