#include <iostream>
#include <windows.h>
#include <cmath>
#include <conio.h>
using namespace std;
int Sum();

main()
{

    cout << "Sum of 100 Natural numbers : " << Sum();
    getch();
}
int Sum()
{
    int sum=0;
    for (int x = 1; x <= 100; x++)
    {
        sum = sum + x;
    }
    return sum;
}
