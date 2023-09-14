#include <iostream>
using namespace std;
string title(float age, char gender);
main()
{
    char gender; 
    float age;
    cout << "Enter Your Age in numbers : ";
    cin >> age;
    cout << "Enter Gender in uppercase (M/F): ";
    cin >> gender;
    
    cout << title(age,gender) << endl;
}

string title(float age, char gender)
{
    string check ;
    if (gender=='M' && age>=16)
    {
        check = "Mr.- a man";
    }
    if (gender=='M' && age<16)
    {
        check = "Master.- a boy";
    }
    if (gender=='F' && age>=16)
    {
        check = "Ms.- a woman";
    }
    if (gender=='F' && age<16)
    {
        check = "Miss.- a girl";
    }
    
    return check;
}
