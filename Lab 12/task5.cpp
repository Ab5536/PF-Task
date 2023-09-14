#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;
main()
{
    fstream file1;
    string data;
    file1.open("example.txt", ios::in);
    getline(file1, data);
    file1.close();
    cout << data << endl;
    getch();
}