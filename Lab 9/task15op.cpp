#include <iostream>
using namespace std;

main()
{
    int n, y = 0;
    cout << "Enter number of values you want to input:  ";
    cin >> n;
    int number[n];
    char single, test;
    bool found;
    for (int x = 0; x < n; x++)
    {
        cout << "Enter Number: ";
        cin >> number[x];
        y++;
    }
    for (y = (y - 1); y >= 0; y--)
    {
        cout << number[y] << " ";
    }
}