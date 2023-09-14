#include <iostream>
using namespace std;
main()
{
    int n;
    cout << "Enter number of values you want to input: ";
    cin >> n;
    int number[n];
    for (int x = 0; x < n; x++)
    {
        cout << "Enter number: ";
        cin >> number[x];
    }
    int small = number[0];
    for (int x = 0; x < n; x++)
    {
        if (number[x] < small)
            small = number[x];
    }
    cout<<small;
}
