#include <iostream>
using namespace std;
char checkresult(int marks);
main()
{
    int marks;
    cout << "Enter Marks : ";
    cin >> marks;

    cout << "Grade= " << checkresult(marks) << endl;
}

char checkresult(int marks)
{
    char check;

    if (marks < 50)
    {
        check = 'F';
    }
    else if (marks >= 50 && marks <= 60)
    {
        check = 'E';
    }
    else if (marks >= 61 && marks <= 70)
    {
        check = 'D';
    }

    else if (marks >= 71 && marks <= 80)
    {
        check = 'C';
    }

    else if (marks >= 81 && marks <= 85)
    {
        check = 'B';
    }
    else if (marks >= 85 && marks <= 100)
    {
        check = 'A';
    }
    else
    {
        check = '0';
    }

    return check;
}