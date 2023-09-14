#include <iostream>
using namespace std;
main()
{
    int n, num, z, seconds;
    bool found = false;
    cout << "Enter number of Colors you are Using: ";
    cin >> n;
    string colour[n];
    for (int x = 0; x < n; x++)
    {
        cout << "Enter Colours :";
        cin >> colour[x];
    }
    seconds = n * 2;
    int a = 1;
    for (int x = 0; x < n; x++)
    {
        if ((x+1) < n)
        {
            if (colour[x] != colour[x + 1])
            {
                seconds = seconds + 1;
            }
        }
        }
    cout << seconds;
}