#include <iostream>
#include <cmath>
using namespace std;
void printpercentage(int num);
main()
{
    
    int num;
    cout << "Enter number of digit you want to enter: ";
    cin >> num;
    printpercentage(num);
}

void printpercentage(int num)
{
    int x = 1,  num1, p1 = 0, p2 = 0, p3 = 0, p4 = 0, p5 = 0;
     float percentage;
    while (x <= num)
    {
        cout << "Enter number (1=< number <=1000) : ";
        cin >> num1;
        if (num1 >= 1 && num1 < 200)
        {
            p1++;
        }
        else if (num1 >= 200 && num1 < 400)
        {
            p2++;
        }
        else if (num1 >= 400 && num1 < 600)
        {
            p3++;
        }
        else if (num1 >= 600 && num1 < 800)
        {
            p4++;
        }
        else if (num1 >= 800 && num1 <= 1000 )
        {
            p5++;
        }
        else
        {
            cout << "Enter correct Values.";
        }
        x++;
    }
    percentage=num;
    percentage = 100 / percentage;
    cout << "percentage of P1" << ": " << p1 * percentage << "%" << endl;
    cout << "percentage of P2" << ": " << p2 * percentage << "%" << endl;
    cout << "percentage of P3" << ": " << p3 * percentage << "%" << endl;
    cout << "percentage of P4" << ": " << p4 * percentage << "%" << endl;
    cout << "percentage of P5" << ": " << p5 * percentage << "%" << endl;
}