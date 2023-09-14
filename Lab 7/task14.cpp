#include <iostream>
using namespace std;
float calculateMoney(int age, int priceoftoy, float priceofmachine);
main()
{
    int age, priceoftoy;
    float priceofmachine, amount;
    cout << "Enter Lilly's age: ";
    cin >> age;
    cout << "Enter Price of Washing Machine: ";
    cin >> priceofmachine;
    cout << "Enter Price of Toy: ";
    cin >> priceoftoy;
    amount=calculateMoney(age, priceoftoy, priceofmachine);
    if (amount >= 0)
    {
        cout << "Yes ! " << amount << endl;
    }
    else
    {

        cout << "No ! " << -amount << endl;
    }
}

float calculateMoney(int age, int priceoftoy, float priceofmachine)
{
    int x = 1, toy = 0;
    float money = 0, increment = 10, price;
    while (x <= age)
    {
        if (x % 2 != 0)
        {
            toy = toy + 1;
        }
        else
        {
            money = money + increment;
            increment += 10;
        }
        x++;
    }
    price = ((toy * priceoftoy) + (money - (age / 2)));

     return price-priceofmachine;
   
}