#include <iostream>
using namespace std;

main()
{

    float pastyear, money, amount;
    int x = 1800, oddremain = 0, age = 18, evenremain = 0;
    float increment = 10, price, realmoney;
    cout << "Enter Inherited Money: ";
    cin >> money;
    cout << "Enter Year he want to live in Past: ";
    cin >> pastyear;

    realmoney = money;
    while (x <= pastyear)
    {
        if (x % 2 == 0)
        {
            money = money - 12000; 
        }
        else if(x%2 !=0)
        {
           
            age += 1;
           oddremain= (12000 + (50 * age));
            money = money - oddremain ;
        }
        else{
            cout<<"no"<<endl;
        }
        x=x+1;
        cout<<money<<endl;
    }
    amount=realmoney-money;
    if (amount >= 0)
    {
        cout << "Yes !He will live a carefree Life and will have " << amount << " dollars left" << endl;
    }
    else
    {

        cout << "He will need " << amount << " dollars to survive." << endl;
    }
}
