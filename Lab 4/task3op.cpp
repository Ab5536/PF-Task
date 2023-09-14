#include <iostream>
using namespace std;
void result(int marks);

main()
{
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;
    result(marks);
}
void result(int marks)
{
    if (marks >= 50)
        cout << "Wow, You have Passed the Exam" << endl;
    if (marks < 50)
        cout << "sad, You are failed in the Exam" << endl;
}
