#include <iostream>
#include <conio.h>
using namespace std;
float calculateMoney(float money, float pastyear);
main()
{

    float pastyear, money, amount;
    cout << "Enter Inherited Money: ";
    cin >> money;
    cout << "Enter Year he want to live in Past: ";
    cin >> pastyear;
    amount = calculateMoney(money, pastyear);
    if (amount >= 0)
    {
        cout << "Yes !He will live a carefree Life and will have " << amount << " dollars left" << endl;
    }
    else
    {

        cout << "He will need " << -amount << " dollars to survive." << endl;
    }
    getch();
}

float calculateMoney(float money, float pastyear)
{
    int x = 1800, age = 19;
    while (x <= pastyear)
    {
        if (x % 2 != 0)
        {
            
            money = money - (12000 + (50 * age));
            age += 2;
        }
        else
        {
            money = money - 12000;
        }
        x++;
    }
    return money;
}