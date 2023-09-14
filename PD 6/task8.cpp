#include <iostream>
using namespace std;
string checkFigure1(int num1, int num2, int num3);
main()
{
    int num1, num2, num3;
    string result;

    cout << "Enter value of H: ";
    cin >> num1;
    cout << "Enter the x-coordinate in Plane: ";
    cin >> num2;
    cout << "Enter the y=coordinate in plane: ";
    cin >> num3;

    result = checkFigure1(num1,num2,num3);

    cout << result << endl;
}

string checkFigure1(int num1, int num2, int num3)
{ 
string result;
    if (num2 > (3 * num1) || num2 > (4 * num1) || num3 > num1 && num2 < num1 || num3 > num1 && num2 > (2 * num1))
    {
        result = "outside the figure";
    }
    else if ((num2 <= (3 * num1) && num3 == 0) || (num2 == 0 && num3 <= num1) || (num2 <= num1 && num3 == num1) || (num2 == num1 && num3 >= num1) || ((num2 >= num1 && num2 <= (2 * num1)) && num3 == (4 * num1)) || (num2 == (2 * num1) && num3 >= num1) || ((num2 >= (2 * num1) && num2 <= (3 * num1)) && num3 == num1) || num2 == (3 * num1))
    {
        result = "on the border";
    }
    else
    {
        result = "inside the figure";
    }
    return result;
}