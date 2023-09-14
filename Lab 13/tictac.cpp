#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;
HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
void printbox(char arr[3][3]);
bool checkchoice(char arr[3][3], int &playerinput);
void storechoice(char choice, char arr[3][3], int playerinput);
void rules();

main()
{
    char arr[3][3] = {{'1', '2', '3'},
                      {'4', '5', '6'},
                      {'7', '8', '9'}};
    char choice;
    int playerinput = 0;

    for (int x = 0; x <= 9; x++)
    {
        printbox(arr);
        playerinput = x % 2;
        cout << "Enter Player " << playerinput + 1 << " choice : ";
        cin >> choice;
        storechoice(choice, arr, playerinput);
        if (x > 3)
        {
            if (checkchoice(arr, playerinput))
            {
                SetConsoleTextAttribute(h, 6);
                cout << "\t\t\tHurrah\n\t\t\tPlayer " << playerinput + 1 << " Won" << endl;
                SetConsoleTextAttribute(h, 7);
                Sleep(2000);
            }
        }
        system("cls");
    }
}

void show()
{
    SetConsoleTextAttribute(h, 9);
    cout << "\n\tEnter Position again\n";
    SetConsoleTextAttribute(h, 7);
}

void printbox(char arr[3][3])
{

    SetConsoleTextAttribute(h, 12);
    cout << "\t\t\t     |     |     " << endl;
    cout << "\t\t\t  " << arr[0][0] << "  |  " << arr[0][1] << "  |  " << arr[0][2] << endl;
    cout << "\t\t\t_____|_____|_____" << endl;
    cout << "\t\t\t     |     |     " << endl;
    cout << "\t\t\t  " << arr[1][0] << "  |  " << arr[1][1] << "  |  " << arr[1][2] << endl;
    cout << "\t\t\t_____|_____|_____" << endl;
    cout << "\t\t\t     |     |     " << endl;
    cout << "\t\t\t  " << arr[2][0] << "  |  " << arr[2][1] << "  |  " << arr[2][2] << endl;
    cout << "\t\t\t     |     |     " << endl;
    SetConsoleTextAttribute(h, 7);
}

void storechoice(char choice, char arr[3][3], int playerinput)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (choice == arr[i][j])
            {
                if (playerinput == 0)
                {
                    arr[i][j] = '%';
                }
                else if (playerinput == 1)
                {
                    arr[i][j] = 'o';
                }
            }
        }
    }
}

bool checkchoice(char arr[3][3], int &playerinput)
{
    for (int y = 0; y < 3; y++)
    {
        int x = 0;
        if (arr[x][y] == arr[x][y + 1] && arr[x][y + 1] == arr[x][y + 2])
        {
            return true;
        }
    }
    for (int x = 0; x < 3; x++)
    {
        int y = 0;
        if (arr[x][y] == arr[x + 1][y] && arr[x + 1][y] == arr[x + 2][y])
        {
            return true;
        }
    }
    int x = 0, y = 0;
    if ((arr[x][y] == arr[x + 1][y + 1] && arr[x + 1][y + 1] == arr[x + 2][y + 2]) || (arr[x][y + 2] == arr[x + 1][y + 1] && arr[x + 1][y + 1]) == arr[x + 2][y])
    {
        return true;
    }
}

void rules()
{
    SetConsoleTextAttribute(h, 8);
    cout << "\t\t\tRules: ";
    cout << "\t\t1) Player 1 : % " << endl;
    cout << "\t\t2) Player 2 : o " << endl;
    SetConsoleTextAttribute(h, 7);
}
