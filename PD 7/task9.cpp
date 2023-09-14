#include <iostream>
using namespace std;
void Triangle(int);

int main()
{
    int num;
    cout << "Enter Number: ";
    cin >> num;
    Triangle(num);
}

void Triangle(int num1)
{
    for (int x = 1; x <= num1; x++)
    {
        for (int y = 1; y <= x; y++)
        {
            cout << "*";
        }

        for (int z = x + 1; (z <= num1 * 2 - x); z++)
        {
            cout << " ";
        }

        for (int a = (num1 - x); a < num1; a++)
        {
            cout << "*";
        }
        cout << endl;
    }
}