#include <iostream>
using namespace std;

main()
{
    int index, y = 0, sum = 0, avg = 0;
    char single, test;
    bool found;
    string name;
    cout << "Enter String : ";
    getline(cin, name);
    for (int x = 0; true; x++)
    {
        if (name[x] == '\0')
        {
            y = x;
            break;
        }
    }
    for (y; y >= 0; y--)
    {
        cout << name[y] << " ";
    }
}