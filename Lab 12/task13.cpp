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
        getline(fileto, view);
        if (view[0] != 'T')
            count++;
    }

    fileto.close();
    cout << count;
}