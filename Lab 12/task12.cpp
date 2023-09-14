#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;
//string students[200];
int count = 0;
string stname[100];
int matricmarks[100], fscmarks[100], ecatmarks[100], age[100];
void stinfo();
void saveinfo();
int main()
{
    stinfo();
    saveinfo();
    getch();
}
void stinfo()
{
    cout << "Enter Students Name: ";
    cin >> stname[count];
    cout << "Enter Student's Age: ";
    cin >> age[count];
    cout << "Enter Students Matric Marks: ";
    cin >> matricmarks[count];
    cout << "Enter Students FSC Marks: ";
    cin >> fscmarks[count];
    cout << "Enter Students Ecat Marks: ";
    cin >> ecatmarks[count];
    // count++;
}
void saveinfo()
{
    fstream file;
    file.open("student.txt", ios::app);
    file << stname[count] << endl
         << age[count] << endl
         << matricmarks[count] << endl
         << fscmarks[count] << endl
         << ecatmarks[count] << endl;
    file.close();
}