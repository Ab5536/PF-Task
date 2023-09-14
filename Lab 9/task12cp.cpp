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
    for (int x = 0; name[x] != '\0'; x++)
    {
        if (name[x] == 'a')
        {
            name[x] = 'b';
        }
        else if (name[x] == 'b')
        {
            name[x] = 'c';
        }
        else if (name[x] == 'c')
        {
            name[x] = 'd';
        }
        else if (name[x] == 'd')
        {
            name[x] = 'e';
        }
        else if (name[x] == 'e')
        {
            name[x] = 'f';
        }
        else if (name[x] == 'f')
        {
            name[x] = 'g';
        }
        else if (name[x] == 'g')
        {
            name[x] = 'h';
        }
        else if (name[x] == 'h')
        {
            name[x] = 'i';
        }
        else if (name[x] == 'i')
        {
            name[x] = 'j';
        }
        else if (name[x] == 'j')
        {
            name[x] = 'k';
        }
        else if (name[x] == 'k')
        {
            name[x] = 'l';
        }
        else if (name[x] == 'l')
        {
            name[x] = 'm';
        }
        else if (name[x] == 'm')
        {
            name[x] = 'n';
        }
        else if (name[x] == 'n')
        {
            name[x] = 'o';
        }
        else if (name[x] == 'o')
        {
            name[x] = 'p';
        }
        else if (name[x] == 'p')
        {
            name[x] = 'q';
        }
        else if (name[x] == 'q')
        {
            name[x] = 'r';
        }

        else if (name[x] == 'r')
        {
            name[x] = 's';
        }
        else if (name[x] == 's')
        {
            name[x] = 't';
        }
        else if (name[x] == 't')
        {
            name[x] = 'u';
        }
        else if (name[x] == 'u')
        {
            name[x] = 'v';
        }
        else if (name[x] == 'v')
        {
            name[x] = 'w';
        }
        else if (name[x] == 'w')
        {
            name[x] = 'x';
        }
        else if (name[x] == 'x')
        {
            name[x] = 'y';
        }
        else if (name[x] == 'y')
        {
            name[x] = 'z';
        }
        else if (name[x] == 'z')
        {
            name[x] = 'a';
        }
    }
    for (int x = 0; name[x] != '\0'; x++)
    {
        cout << name[x];
    }
}