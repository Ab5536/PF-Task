#include <iostream>
using namespace std;
main()
{
    int n = 4, num, x;
    string y;
    bool found = false;
    string word[n];
    for (int x = 0; x < n; x++)
    {
        cout << "Enter a String :";
        getline(cin, word[x]);
    }
    y = word[0];
    for (int x = 0; x < n; x++)
    {

        if (y == word[x])
        {
            found = true;
            continue;
        }
        else
        {
            found = false;
            break;
        }
    }
    if (found == true)
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "   False" << endl;
    }
}