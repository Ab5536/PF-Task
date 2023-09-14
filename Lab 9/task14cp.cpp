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
        if (name[x] == 'a' || name[x] == 'e' || name[x] == 'i' || name[x] == 'o' || name[x] == 'u')
            y++;
    }
    cout<<"Number of Vowels: "<<y;
}