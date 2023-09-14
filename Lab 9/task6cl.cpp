#include <iostream>
#include <cmath>
using namespace std;
main()
{
    int num = 5, sum = 0, avg = 0;
    int number[num] = {1, 2, 3, 4, 5};
    for (int x = 0; x < num; x++)
    {
        sum = number[x] + sum;
    }

    cout << "Sum : " << sum << endl;
    cout << "Average : " << sum / 5 << endl;
}