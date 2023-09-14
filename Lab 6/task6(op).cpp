#include <iostream>
using namespace std;
int great(int num1, int num2, int num3);
main()
{
    int num1, num2, num3;
    cout << "Enter Number 1: ";
    cin >> num1;
    cout << "Enter Number 2: ";
    cin >> num2;
    cout << "Enter Number 3: ";
    cin >> num3;
    cout << great(num1, num2, num3) << " is Greater number." << endl;
}

int great(int num1, int num2, int num3)
{
    int greatest;

    if (num1 > num2)
    {
        if(num1 > num3){
        greatest = num1;}
    }
    if (num2 > num1 )
    {
        if(num2 > num3){
        greatest = num2;}
    }
    if (num3 > num1 )
    {
        if(num3 > num2){
        greatest = num3;}
    }
    return greatest;
}