#include <iostream>
using namespace std;
main()
{
    int n = 5, ticket = 500, x;
    bool found = false;
    string movie[n] = {"gladiator", "starwars", "terminator", "takinglives", "tombrider"};
    int price[n] = {60, 70, 40, 30};
    string moviename;

    cout << "Enter Name of Movie: ";
    cin >> moviename;

    for (x = 0; x < n; x++)
    {
        if (movie[x] == moviename)
        {
            found = true;
            break;
        }
    }
    if (found == true)
    {
        if (x % 2 == 0)
        {
            cout << "Price of Movie Ticket = " << ticket - (ticket * 0.10) << endl;
        }
        else
        {
            cout << "Price of Movie Ticket = " << ticket - (ticket * 0.05) << endl;
        }
    }
    else
        cout << "We are not streaming this Movie" << endl;
}