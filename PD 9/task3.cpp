#include <iostream>
using namespace std;
main()
{
    int n, ticket, x;
    bool found = false;
    string word;

    cout << "Enter Any string : ";
    cin >> word;
    x = word.length();
    if (x % 2 == 0)
    {
        cout << "Length is even." << endl;
    }
    else
    {
        cout << "Length is Odd." << endl;
    }
}