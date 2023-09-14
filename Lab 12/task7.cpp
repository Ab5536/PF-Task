#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;
main()
{
    int i = 0;
    fstream file1;
    string data;
    file1.open("example.txt", ios::in);
    while (!file1.eof())
    {

        getline(file1, data);
        i++;
    }
    file1.close();
    cout << " Number of Lines: " << i << endl;
    getch();
}