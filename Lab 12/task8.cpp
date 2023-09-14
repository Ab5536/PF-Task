#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;
main()
{
    int y = 0;
    fstream file1;
    string data;
    file1.open("example.txt", ios::in);
    while (!file1.eof())
    {

        getline(file1, data);
        for (int i = 0; data[i] != '\0'; i++)
        {
            y++;
            // cout << y;
        }
    }
    file1.close();
    cout << " Number of Characters: " << y << endl;
    getch();
}