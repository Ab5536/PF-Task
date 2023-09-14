#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    float sum = 0, num;
    float number[n];
    string word[4] = {"quarters",
                      "dimes",
                      "nickels",
                      "pennies"};

    for (int x = 0; x < n; x++)
    {
        cout << "Enter " << word[x] << " : ";
        cin >> number[x];
    }
    cout << "Enter the Price of item: ";
    cin >> num;
    sum = (number[0] * 0.25);
    sum = sum + (number[1] * 0.10);
    sum = sum + (number[2] * 0.05);
    sum = sum + (number[3] * 0.01);
    if (sum >= num)
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }
}
