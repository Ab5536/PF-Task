#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
void menuinterface();
void enterdata();
void searchdata();
void updatedata();
void deletedata();
string rollno[1000], name[1000], coursename[1000], clas[1000], contactno[1000];
int indx = 0;
int main()
{
    menuinterface();
}
void enterdata()
{
    system("CLS");
    cout << "\t\t--->>> ENTER DATA <<<---";
    cout << "\n\tEnter Your Name :";
    cin >> name[indx];
    cout << "\n\tEnter Your Roll No :";
    cin >> rollno[indx];
    cout << "\n\tEnter Your Coursename :";
    cin >> coursename[indx];
    cout << "\n\tEnter Your Class :";
    cin >> clas[indx];
    cout << "\n\tEnter your Contact Number :";
    cin >> contactno[indx];
    indx++;
    cout << "\n\tYour Data is Entered Successfully now !!!!!";
    cout << "\n\tPress 1 to enter data again :";
    cout << "\n\tPress 2 to go to Main Menu :";
    int choise;
    cout << "\n\tEnter your choise :";
    cin >> choise;
    if (choise == 1)
    {
        system("CLS");
        enterdata();
    }
    else if (choise == 2)
    {
        system("CLS");
        menuinterface();
    }
    else
    {
        cout << "\nInvalid Input!!!!!!!!!!";
    }
}
void searchdata()
{
    cout << "\t\t--->>>SEARCH DATA <<<---";
    if (indx == 0)
    {
        cout << "\n\tNo Data is Entered (Please first enter the data for search!!!)";
    }
    else
    {
        string rolno;
        cout << "\n\n\tEnter the Roll No of Student whose data is to searched :";
        cin >> rolno;
        bool test = true;
        for (int i = 0; i < indx; i++)
        {
            if (rolno == rollno[i])
            {
                test = false;
                cout << "\n\n\tName :" << name[i] << "\tRoll No:" << rollno[i] << "\tCourse Name :" << coursename[i] << "\t Class:" << clas[i] << "\tContact No :" << contactno[i];
            }
        }
        if (test == true)
        {
            cout << "\n\t Sorry ! No Record is found with this Roll No...";
        }
        cout << "\nPress 1 to Search Data Again :";
        cout << "\nPress 2 for go to Main Menu :";
        cout<<"\nEnter your choise :";
        int choise;
        cin >> choise;
        if (choise == 1)
        {
            searchdata();
        }
        else if (choise == 2)
        {
            menuinterface();
        }
        else
        {
            cout << "\n Invalid Input !!!";
        }
    }
}
void updatedata()
{
    system("CLS");
    string rolnum;
    cout << "\t\t--->>> UPDATE DATA <<<---";
    if (indx == 0)
    {
        cout << "\n\t No data is entered (first enter the data for update)";
    }
    else
    {
        cout << "\n\tEnter the RollNo of Student whose data is to be updated :";
        cin >> rolnum;
        for (int i = 0; i < indx; i++)
        {
            if (rolnum == rollno[i])
            {
                cout << "\n\n\tName :" << name[i] << "\tRoll No:" << rollno[i] << "\tCourse Name :" << coursename[i] << "\t Class:" << clas[i] << "\tContact No :" << contactno[i];
                cout << endl
                     << endl;
                cout << "\n\t---->Now enter the new data of student<---- ";
                cout << "\n\t Enter the Name :";
                cin >> name[i];
                cout << "\n\tEnter Roll No :";
                cin >> rollno[i];
                cout << "\n\tEnter Course Name :";
                cin >> coursename[i];
                cout << "\n\tEnter Class :";
                cin >> clas[i];
                cout << "Enter Contact Number :";
                cin >> contactno[i];
            }
        }
        cout << endl
             << endl;
        cout << "\t\tYour data is updated successfully !!!!";
        cout << "\n\n\tPress 1 to update the data again :";
        cout << "\n\n\tPress 2 to go to Main Menu :";
        cout << "\n\tEnter your choise :";
        int choise;
        cin >> choise;
        if (choise == 1)
        {
            updatedata();
        }
        else if (choise == 2)
        {
            menuinterface();
        }
        else
        {
            cout << "\n\tInvalid Input !!!!";
        }
    }
}
void deletedata()
{
    system("CLS");
    cout << "\n\t\t--->>> DELETE DATA <<<---";
    if (indx == 0)
    {
        cout << "\n\tNo data found....";
    }
    else
    {
        int choise;
        cout << "\n\tPress 1 to delete all the data from the system :";
        cout << "\n\tPress 2 to delete data of specific Student :";
        cout << "\n\tEnter your choise :";
        cin >> choise;
        if (choise == 1)
        {
            indx = 0;
            cout << "\n\t\tAll the data is Deleted !!!!!";
        }
        else if (choise == 2)
        {
            string rollnm;
            bool check = true;
            cout << "\n\tEnter the RollNo of Stident whose data is to be deleted :";
            cin >> rollnm;
            for (int i = 0; i < indx; i++)
            {
                if (rollnm == rollno[i])
                {
                    check = false;
                    for (int j = i; j < indx; j++)
                    {
                        name[j] = name[j + 1];
                        rollno[j] = rollno[j + 1];
                        coursename[j] = coursename[j + 1];
                        clas[j] = clas[j + 1];
                        contactno[j] = contactno[j + 1];
                    }
                    indx--;
                    cout << "\n\t\tYour required data is deleted !!!!!";
                }
            }
            if (check == true)
            {
                cout << "\n\tNo record found !!!";
            }
        }
        else
        {
            cout << "\n\t\tInvalid Input !!!!!";
        }
    }
    cout << "\n\tPress 1 to Delete Data Again :";
    cout << "\n\tPress 2 to go to Main Menu :";
    int choise;
    cout << "\n\tEnter your choise :";
    cin >> choise;
    if (choise == 1)
    {
        deletedata();
    }
    else if (choise == 2)
    {
        menuinterface();
    }
    else
    {
        cout << "\n\tInvalid Input !!!!";
    }
}
void menuinterface()
{
    cout << "\n\t\t|-----------------------------------------------------------|";
    cout << "\n\t\t|                       WELCOME TO                          |";
    cout << "\n\t\t|                                                           |";
    cout << "\n\t\t|                STUDENT MANAGEMENT SYSTEM                  |";
    cout << "\n\t\t|                                                           |";
    cout << "\n\t\t|                                                           |";
    cout << "\n\t\t|-----------------------------------------------------------|";
    cout << endl<< endl;
    cout << "\n\n\t ---->>>MENU BAR>>>----";
    cout << "\n\tPress 1 to ENTER DATA :";
    cout << "\n\tPress 2 to SEARCH DATA :";
    cout << "\n\tPress 3 to UPDATE DATA :";
    cout << "\n\tPress 4 to DELETE DATA :";
    cout << "\n\tEnter your choise :";
    int choise;
    cin >> choise;
    if (choise == 1)
    {
        enterdata();
    }
    else if (choise == 2)
    {
        searchdata();
    }
    else if (choise == 3)
    {
        updatedata();
    }
    else if (choise == 4)
    {
        deletedata();
    }
}
