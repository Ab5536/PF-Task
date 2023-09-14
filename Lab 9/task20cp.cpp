#include <iostream>
using namespace std;
int main()
{
    int n;
    float sum = 0, num;
    cout << "Enter number of Reistences: ";
    cin >> n;
    float array[n];
    for (int x = 0; x < n; x++)
    {
        cout << "Enter R" << x + 1 << " : ";
        cin >> array[x];
        sum = sum + array[x];
    }
    cout << "Equivalent Resistence= " << sum <<" ohms"<< endl;
}
