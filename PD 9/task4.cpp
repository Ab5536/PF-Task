#include <iostream>
using namespace std;
main()
{
    int n, num, x, y;
    bool found = false;

    cout << "Enter Number of Values you want to Input : ";
    cin >> n;
    int number[n];
    for (int x = 0; x < n; x++)
    {
        cout << "Enter a Number :";
        cin >> number[x];
    }

    for (int x = 0; x < n; x++)
    {
        y = number[x];
        while (y != 0)
        {
            num = y % 10;
            y = y / 10;
            if (num == 7)
            {
                found = true;
                break;
            }
        }
    }
    if (found == true)
    {
        cout << "Boom!" << endl;
    }
    else
    {
        cout << "there is no 7 in the array" << endl;
    }
}