#include <iostream>
#include <cmath>
using namespace std;
main()
{
    int num;
    cout << "Enter number of Values you want to input: ";
    cin >> num;
    int number[num];
    for (int x = 0; x < num; x++)
    {
        cout << "Enter " << x + 1 << " Number : ";
        cin >> number[x];
    }
    for (int x = 0; x < num; x++)
    {
        cout << "The " << x + 1 << " element in Array is : " << number[x] << endl;
    }
}