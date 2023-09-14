#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;
main()
{
    fstream file1;
    char data;
    cout << "Enter Character: ";
    cin >> data;
    file1.open("Filer task 2.txt", ios::out);
    file1 << data;
    file1.close();
    getch();
}