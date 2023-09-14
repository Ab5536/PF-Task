#include <iostream>
using namespace std;
void counting(int number);
main()
{
    int num;
    cout << "Enter a number to print counting: ";
    cin >> num;
    counting(num);
}
void counting(int number)
{
    int x = 0;
    while ( x <= number)
    {

        cout << x << endl;
        x++;
    }
}
