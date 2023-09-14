#include <iostream>
#include <fstream>
using namespace std;
void arraychange(int newarr[][5], int num);
int main()
{
    int number1[5][5] = {{1, 2, 3, 4, 5}, {5, 6, 7, 8, 9}, {3, 3, 3, 3, 3}, {4, 4, 4, 4, 4}, {5, 5, 5, 5, 5}};
    // int number2 = 20;
    // int *p = &number1;
    // int *p1 = &number2;
    cout << "\t\t\t<<<<<<<<<>>>>>>>>>>>>\n";
    // cout << "Number Before Function call: " << *p << "\t" << *p1 << endl;
    arraychange(number1, 5);
    //  cout << "Number after Function call: " << *p << "\t" << *p1 << endl;
    cout << "\n\t\t\t<<<<<<<<<>>>>>>>>>>>>";
}
void arraychange(int newarr[][5], int num)
{
    for (int i = 0; i < 5; i++)
    {
        cout << "\t" << endl;
        for (int x = 0; x < 5; x++)
        {
            cout << newarr[i][x] << "\t";
        }
    }
}