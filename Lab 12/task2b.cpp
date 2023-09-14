#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;
main()
{
    fstream file1;
    float data;
    cout << "Enter Floatiing Value: ";
    cin >> data;
    file1.open("Filer Task 2.txt", ios::out);
    file1 << data;
    file1.close();
    getch();
}