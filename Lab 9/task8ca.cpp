#include <iostream>
#include <cmath>
using namespace std;
main()
{
    string word;
    char letter;
    bool isfound = false;
    cout << "Enter a Word :";
    getline(cin, word);

    for (int x = 0; word[x] != '\0'; x++)
    {

        cout << "At Position " << x << " : " << word[x] << endl;
    }
}