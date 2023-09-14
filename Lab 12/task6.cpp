#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;
main()
{
    fstream file1;
    string data="Abdu;lla  zahid";
    file1.open("example.txt", ios::in);
    // while (!file1.eof())
    // {
    //     getline(file1, data);
    //     cout << data << endl;
    // }
    // file1.close();
    cout<<data.length();
    getch();
}