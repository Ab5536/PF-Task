#include <iostream>
using namespace std;
main()
{
    int n = 4, kg, x;
    bool found = false;
    string fruit[n] = { "peach", "apple", "guava", "watermelon" };
    int price[n] = { 60, 70, 40, 30 };
    string fruitname;

    cout << "Enter Name of Fruit: ";
    cin >> fruitname;
    cout << "Enter the amount of Kgs: ";
    cin >> kg;
    for (x = 0; x < n; x++)
    {
        if (fruit[x] == fruitname)
        {

            found = true;
            break;
        }
    }
    if (found == true)
    {
        cout << "Price of Fruit = " << price[x] * kg << endl;
    }
    else
        cout << "We don't have this Fruit. " << endl;
}