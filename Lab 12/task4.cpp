#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;
main()
{
    fstream file1;
    int data;
    file1.open("example.txt", ios::in);
    file1 >> data;
    file1.close();
    cout << data << endl;
    getch();
}