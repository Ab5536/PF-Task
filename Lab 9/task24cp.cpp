#include <iostream>
using namespace std;

main()
{
    int index, y = 0;
    char single, test;
    bool found;
    string name;
    cout << "Enter String: ";
    getline(cin, name);
    for (int x = 0; name[x] != '\0'; x++)
    {
        if (name[x] == 'a' || name[x] == 'e' || name[x] == 'i' || name[x] == 'o' || name[x] == 'u' || name[x] == 'A' || name[x] == 'E' || name[x] == 'I' || name[x] == 'O' || name[x] == 'U')
        {
            int z = x;
            for (int y = 0; name[y] != '\0'; y++)
            {

                name[z] = name[z + 1];
                z++;
            }
            x--;
        }
        else
        {
            continue;
        }
    }
    for (int x = 0; name[x] != '\0'; x++)
    {
        cout << name[x];
    }
}