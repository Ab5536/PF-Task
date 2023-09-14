#include <iostream>
using namespace std;
int Sum();
int main()
{

    cout << Sum() << endl;
    return 0;
}
int Sum()
{
    int sum = 0;
    for (int x = 1; x <= 5; x++)
    {

        sum = sum + x;
    }
    return sum;
}
