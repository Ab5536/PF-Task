#include <iostream>
using namespace std;
void checkifeven(int number);
main()
{
    int number;
    while (true)
    {
        cout << "Enter number to check even or odd: ";
        cin >> number;
        checkifeven(number);
    }
}
void checkifeven(int number)
{
    if (number % 2 == 0)
        cout << "Entered number is even" << endl;
    if ((number % 2) != 0)
        cout << "Entered number is odd" << endl;
}