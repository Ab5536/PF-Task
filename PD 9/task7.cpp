#include <iostream>
using namespace std;
main()
{
    int n = 0, num, x;
    bool found = false;
    string word, word1;
    cout << "Enter 1st String: ";
    cin >> word;
    cout << "Enter 2nd String: ";
    cin >> word1;
    for (int x = 0; word[x] != '\0'; x++)
    {

        for (int y = 0; word1[y] != '\0'; y++)
            if (word[x] == word1[y])
            {
                n++;
                word1[y] = ' ';
                break;
            }
    }

    cout << n;
}