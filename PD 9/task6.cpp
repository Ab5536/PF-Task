#include <iostream>
using namespace std;
main()
{
    int n, num, x,tr;
    bool found = false;
    cout << "Enter number of values you want to enter: ";
    cin >> n;
    cout<<"Enter number of odd and even transformation: ";
    cin>>tr;
    int number[n];
    for (int x = 0; x < n; x++)
    {
        cout << "Enter Number :";
        cin >> number[x];
        for (int y = 1; y <= tr; y++)
        {
            if (number[x] % 2 == 0)
            {
                number[x] = number[x] - 2;
            }
            else
            {
                number[x] = number[x] + 2;
            }
        }
    }
    for (int x = 0; x < n; x++)
    {
        cout << number[x] << " ";
    }
}