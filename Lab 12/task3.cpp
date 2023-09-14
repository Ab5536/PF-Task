#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;
main()
{
    fstream filevar;
    int info;
    filevar.open("Example.txt ", ios::in);
    filevar >> info;
    filevar.close();
    cout << info;
    getch();
}