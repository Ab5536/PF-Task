#include <iostream>
using namespace std;
int sum(int num1, int num2);
main()
{
    int num1, num2;
    cout << "Enter Number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;
    cout << "sum : " <<sum(num1,num2)  << endl;
}
int sum(int num1, int num2)
{
    return num1 + num2;
}