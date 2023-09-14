#include <iostream>
#include <windows.h>
#include <cmath>
#include <conio.h>
using namespace std;
int digitsum(int num);
main()
{
    int num, frequency;
    cout << "Enter a Number: ";
    cin >> num;
    cout << "Sum = " << digitsum(num) << endl;
    getch();
}
int digitsum(int num)
{

    int newnum, sum = 0;

    while (num != 0)
    {

        newnum = num % 10;
        num = num / 10;
        sum = sum + newnum;
    }
    return sum;
}
