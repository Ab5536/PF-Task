#include <iostream>
using namespace std;
void printTable(int number);
 main()
{
    int num;
    cout << "Enter a number to print its Table: ";
    cin >> num;
    printTable(num);
    
}
void printTable(int number)
{

    for (int x = 1; x <= 10; x++)
    {

        cout << number << " * " << x << " = " << number * x << endl;
    }
}
