#include <iostream>
using namespace std;
void Fabnacciseries(int number);
main()
{
    int num;
    cout << "Enter the length of Fabnacci series : ";
    cin >> num;
    Fabnacciseries(num);
}
void Fabnacciseries(int number)
{
    int num1 = 0, num2 = 1, sum = 0;
    number = number - 2;
    cout << num1 << " " << num2 << " ";
    for (int x = 1; x <= number; x++)
    {
        sum = num1 + num2;
        cout << sum << " ";
        num1 = num2;
        num2 = sum;
    }
}
