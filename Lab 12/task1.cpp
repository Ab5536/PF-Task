#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;
main()
{
    fstream file1;
    int data;
    file1.open("Filer.txt", ios::app);
    file1 << 18;
    file1.close();
    getch();
}