#include <iostream>
using namespace std;
int main()
{
    int n;
    float sum = 0, num;
    cout << "Enter number of Values you want to enter in 2nd Array: ";
    cin >> n;
    int array1[2];
    int array2[n];
    for (int x = 0; x < 2; x++)
    {
        cout << "Enter Number " << (x + 1) << " of Array 1: ";
        cin >> array1[x];
    }
    for (int x = 0; x < n; x++)
    {
        cout << "Enter Number " << (x + 1) << " of Array 2 : ";
        cin >> array2[x];
    }
    for (int x = 0; x < 2; x++)
    {
        cout << array1[x] << " ";
        if (x == 0)
        {
            for (int y = 0; y < n; y++)
            {
                cout << array2[y] << " ";
            }
        }
    }
}
