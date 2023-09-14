#include <iostream>
using namespace std;
main()
{
    int num, n;
    cout << "Enter number of values you want to Enter:  ";
    cin >> n;
    cout << "Enter another Number: ";
    cin >> num;
    int number[n];
    for (int x = 0; x < n; x++)
    {
        cout << "Enter Number " << (x + 1) << " : ";
        cin >> number[x];
    }
    for (int x = 0; x < n; x++)
    {
        cout << "Scalar Product = " << number[x] << " . " << num << " = " << number[x] * num << endl;
    }
}