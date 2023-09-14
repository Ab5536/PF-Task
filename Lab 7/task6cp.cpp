#include <iostream>
#include <windows.h>
#include <cmath>
#include <conio.h>
using namespace std;
int digitsum(int num, int frequency);
main()
{
    int num, frequency;
    cout << "Enter a Number: ";
    cin >> num;
    cout << "Enter a Number to check frequency: ";
    cin >> frequency;

    cout << "Frequency = " << digitsum(num, frequency) << endl;
    getch();
}
int digitsum(int num, int frequency)
{

    int newnum, ans = 0;

    while (num != 0)
    {

        newnum = num % 10;
        num = num / 10;
        if (newnum == frequency)
        {
            ans++;
        }
    }
    return ans;
}
