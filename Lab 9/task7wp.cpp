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
    cout << "Enter Character to Check: ";
    cin >> letter;
    for (int x = 0; word[x] != '\0'; x++)
    {
        if (word[x] == letter)
        {
            isfound = true;
            break;
        }
    }

    if (isfound == true)
    {
        cout << "Yes " << letter << " is Present." << endl;
    }
    else
    {
        cout << "No " << letter << " is not Present." << endl;
    }
}