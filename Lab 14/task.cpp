#include <iostream>
#include <fstream>
using namespace std;
void numberchange(int &x);
int main()
{
    int number = 10;
    int *p = &number;
    cout << "Number Before Function call:" << *p << endl;
    numberchange(number);
    cout << "Number After Function call: " << *p << endl;
}
void numberchange(int &x)
{
    // cout << p << endl;
    // cout << *p << endl;
    x = 20;
    // cout << &p << endl;
    // cout << *p << endl;
}