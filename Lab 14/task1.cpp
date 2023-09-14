#include <iostream>
#include <fstream>
using namespace std;
void numberchange(int &x, int &y);
int main()
{
    int number1 = 10;
    int number2 = 20;
    int *p = &number1;
    int *p1 = &number2;
    cout << "\t\t\t<<<<<<<<<>>>>>>>>>>>>\n";
    cout << "Number Before Function call: " << *p << "\t" << *p1 << endl;
    numberchange(number1, number2);
    cout << "Number after Function call: " << *p << "\t" << *p1 << endl;
    cout << "\t\t\t<<<<<<<<<>>>>>>>>>>>>\n";
}
void numberchange(int &x, int &y)
{
    int z;
    z = x;
    x = y;
    y = z;
}