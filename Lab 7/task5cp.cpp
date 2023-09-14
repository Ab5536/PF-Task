#include <iostream>
#include <windows.h>
#include <cmath>
#include <conio.h>
using namespace std;
int checknumber(int num);
main()
{
    int num;
    cout << "Enter a Number to check its digit: ";
    cin >> num;

    cout << "Number of Digts = " << checknumber(num) << endl;
    getch();
}
int checknumber(int num)
{

    int ans = 0;

    while (num != 0)
    {
        num = num / 10;
        ans++;
    }
    return ans;
}