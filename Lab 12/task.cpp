#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Function to get student details from the console
void getStudentDetails(string &name, int &age, int &matricMarks, int &fscMarks, int &ecatMarks)
{
    cout << "Enter student name: ";
    getline(cin, name);
    cout << "Enter student age: ";
    cin >> age;
    cout << "Enter student matric marks: ";
    cin >> matricMarks;
    cout << "Enter student Fsc marks: ";
    cin >> fscMarks;
    cout << "Enter student Ecat marks: ";
    cin >> ecatMarks;
}

// Function to save student details to file
void saveStudentDetailsToFile(const string &fileName, const string &name, int age, int matricMarks, int fscMarks, int ecatMarks)
{
    ofstream file(fileName, ios_base::app); // Open file in append mode
    file << name << "," << age << "," << matricMarks << "," << fscMarks << "," << ecatMarks << endl;
    file.close(); // Close file
}

int main()
{
    string fileName = "student.txt";
    string name;
    int age, matricMarks, fscMarks, ecatMarks;

    getStudentDetails(name, age, matricMarks, fscMarks, ecatMarks);                  // Get student details from console
    saveStudentDetailsToFile(fileName, name, age, matricMarks, fscMarks, ecatMarks); // Save student details to file

    cout << "Student details saved to file " << fileName << endl;

    return 0;
}
