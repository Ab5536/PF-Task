#include <iostream>
using namespace std;
main()
{
    int x = 1, num, y;
    cout << "Enter desired number of rows: ";
    cin >> num;
    while (x <= num)
    {

        for (y = num ; y >= x; y--)
        {
            cout << "*";
        }
        cout << endl;
        x++;
    }
}