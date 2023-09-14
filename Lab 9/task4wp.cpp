#include <iostream>
#include <cmath>
using namespace std;
main()
{
    int number[5];
    for (int x = 0; x < 5; x++)
    {
        cout << "Enter " << x + 1 << " Number : ";
        cin >> number[x];
    }

    cout << "The 1st element in Array is : " << number[0] << endl;
    cout << "The Last element in Array is : " << number[4] << endl;
}