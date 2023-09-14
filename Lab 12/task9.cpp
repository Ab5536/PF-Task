#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;
main()
{
    int y = 0;
    char check;
    fstream file1;
    string data;
    cout << "Enter a Character to check Frequency: ";
    cin >> check;
    file1.open("example.txt", ios::in);
    while (!file1.eof())
    {

        getline(file1, data);
        for (int i = 0; data[i] != '\0'; i++)
        {
            if (data[i] == check)
            {
                y++;
            }
        }
    }
    file1.close();
    cout << "Frequency of  " << check << " : " << y << endl;
    getch();
}