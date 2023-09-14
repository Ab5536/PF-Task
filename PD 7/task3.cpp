#include <iostream>
using namespace std;

void middle(int number);
void odd(int number);
void upperparto(int number);
void lowerparto(int number);
main()
{
    int number;
    cout << "Enter Number of Rows : ";
    cin >> number;
    if (number % 2 == 0)
    {
        upperparto(number);
        lowerparto(number);
    }
    else if (number % 2 != 0)
    {
        odd(number);
    }
    else
    {
        cout << "Enter number Again. ";
    }
}
void middle(int number)
{
    int num = (number / 2) + 1;
    for (int x = 1; x <= num; x++)
    {
        cout << "*";
    }
    cout << endl;
}

void upperparto(int number)
{
    int b = 1, c = 0, num;
    num = number / 2;
    for (int x = 1; x <= num; x++)
    {
        cout << " ";
        for (int y = (num - 1); y > c; y--)
        {
            cout << " ";
        }
        int a = 1;
        while (a <= b)
        {
            cout << "*";
            a++;
        }
        b++;
        c++;
        cout << endl;
    }
}
void lowerparto(int number)
{
    int num = number / 2;
    int b = num, c = 1;
    for (int x = 1; x <= num; x++)
    {
        cout << " ";
        int a = 1;
        for (int y = 1; y < c; y++)
        {
            cout << " ";
        }
        while (a <= b)
        {
            cout << "*";
            a++;
        }
        b--;

        c++;
        cout << endl;
    }
}
void odd(int number)
{
    upperparto(number);
    middle(number);
    lowerparto(number);
}