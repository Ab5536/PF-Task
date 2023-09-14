#include <iostream>
using namespace std;

main()
{
    int n, y = 0, num;
    cout << "Enter number of Fruits you want to input:  ";
    cin >> n;
    int number[n];
    string word[n];
    char single, test;
    bool found=false;
    for (int x = 0; x < n; x++)
    {
        cout << "Enter Number: ";
        cin >> number[x];
    }
    cout << "Enter another Number: ";
    cin >> num;
    for (int y = 0; y < n; y++)
    {
        if (number[y] == num)
        {
            found=true;
            break;
        }

    }
    if(found==true){
        cout << " Already Entered " << endl;
    }
    else{
        cout << " Not Found " << endl;
    }
}