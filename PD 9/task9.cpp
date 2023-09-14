#include <iostream>
#include <cstring>
using namespace std;
int value(string num1);
main()
{
    int num;
    string word;
    string moves[10] = {"Shimmy", "Shake", "Pirouette", "Slide", "BoxStep", "Headspin", "Dosado", "Pop", "Lock", "Arabesque"};
    bool found = false;
    cout << "Enter 4 digit Pin: ";
    cin >> word;
    int number[4];
    int y = value(word);
    if (y == 4)
    {
        for (int x = 0; word[x] != '\0'; x++)
        {
            if (word[x] == '0')
            {
                num = 0 + x;
                cout << moves[num % 10]<<" ";
            }
            else if (word[x] == '1')
            {
                num = 1 + x;
                cout << moves[num % 10]<<" ";
            }
            else if (word[x] == '2')
            {
                num = 2 + x;
                cout << moves[num % 10]<<" ";
            }
            else if (word[x] == '3')
            {
                num = 3 + x;
                cout << moves[num % 10]<<" ";
            }
            else if (word[x] == '4')
            {
                num = 4 + x;
                cout << moves[num % 10]<<" ";
            }
            else if (word[x] == '5')
            {
                num = 5 + x;
                cout << moves[num % 10]<<" ";
            }
            else if (word[x] == '6')
            {
                num = 6 + x;
                cout << moves[num % 10]<<" ";
            }
            else if (word[x] == '7')
            {
                num = 7 + x;
                cout << moves[num % 10]<<" ";
            }
            else if (word[x] == '8')
            {
                num = 8 + x;
                cout << moves[num % 10]<<" ";
            }
            else if (word[x] == '9')
            {
                num = 9 + x;
                cout << moves[num % 10]<<" ";
            }
        }
    }
    else
    {
        cout << "Invalid Input.";
    }
}
int value(string num1)
{
    int y = 0;
    for (int x = 0; num1[x] != '\0'; x++)
    {

        if (num1[x] == '0' || num1[x] == '1' || num1[x] == '2' || num1[x] == '3' || num1[x] == '4' || num1[x] == '5' || num1[x] == '6' || num1[x] == '7' || num1[x] == '8' || num1[x] == '9')
        {
            y++;
        }
    }
    return y;
}