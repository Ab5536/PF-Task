#include <iostream>
using namespace std;
string isEligible(int age);
main()
{
    int age;
    cout << "Enter Your Age : ";
    cin >> age;
    cout << isEligible(age);
}

string isEligible(int age)
{
    if (age >= 18)
        return "Eligible to Vote";
    else
        return "Not eligible";
}
