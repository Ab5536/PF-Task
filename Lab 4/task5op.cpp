#include <iostream>
using namespace std;
void great(int num1, int num2);
main()
{
    int num1, num2;
    cout << "Enter Number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;
    great (num1,num2);
}

void great(int num1, int num2)
{
    if (num1 > num2)
        cout << "Greater Number : " << num1 << endl;
    else if (num2 > num1)
        cout << "Greater Number : " << num2 << endl;
    else
        cout << "Both Numbers are equal " << endl;
}
