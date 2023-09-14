#include <iostream>
#include <windows.h>
using namespace std;
 main()
{

    double budget, transport, fee, ticket;
    int nofpeople;
    string category;
    cout << "Enter your Budget: ";
    cin >> fee;
    cout << "Enter your Category (vip/normal): ";
    cin >> category;
    cout << "Enter number of People: ";
    cin >> nofpeople;
    if (nofpeople >= 1 && nofpeople <= 4)
    {
        budget = fee * 0.25;
        if (category == "vip")
        {
            ticket = nofpeople * 499.99;
            if (ticket > budget)
            {
                ticket = ticket - budget;
                cout << "Not Enough Money! You need " << ticket << " Qatari Rial" << endl;
            }
            else
            {

                ticket = budget - ticket;
                cout << "Yes You have  " << ticket << " Qatari Rial left" << endl;
            }
        }
        else
        {

            ticket = nofpeople * 249.99;

            if (ticket > budget)
            {
                ticket = ticket - budget;
                cout << "Not Enough Money! You need " << ticket << " Qatari Rial" << endl;
            }
            else
            {

                ticket = budget - ticket;
                cout << "Yes You have  " << ticket << " Qatari Rial left" << endl;
            }
        }
    }
    if (nofpeople >= 5 && nofpeople <= 9)
    {
        budget = fee * 0.40;
        if (category == "vip")
        {
            ticket = nofpeople * 499.99;
            if (ticket > budget)
            {
                ticket = ticket - budget;
                cout << "Not Enough Money! You need " << ticket << " Qatari Rial" << endl;
            }
            else
            {
                ticket = budget - ticket;
                cout << "Yes You have  " << ticket << " Qatari Rial left" << endl;
            }
        }
        else
        {
            ticket = nofpeople * 249.99;
            if (ticket > budget)
            {
                ticket = ticket - budget;
                cout << "Not Enough Money! You need " << ticket << " Qatari Rial" << endl;
            }
            else
            {
                ticket = budget - ticket;
                cout << "Yes You have  " << ticket << " Qatari Rial left" << endl;
            }
        }
    }
    if (nofpeople >= 10 && nofpeople <= 24)
    {
        budget = fee * 0.50;
        if (category == "vip")
        {
            ticket = nofpeople * 499.99;
            if (ticket > budget)
            {
                ticket = ticket - budget;
                cout << "Not Enough Money! You need " << ticket << " Qatari Rial" << endl;
            }
            else
            {
                ticket = budget - ticket;
                cout << "Yes You have  " << ticket << " Qatari Rial left" << endl;
            }
        }
        else
        {
            ticket = nofpeople * 249.99;
            if (ticket > budget)
            {
                ticket = ticket - budget;
                cout << "Not Enough Money! You need " << ticket << " Qatari Rial" << endl;
            }
            else
            {
                ticket = budget - ticket;
                cout << "Yes You have  " << ticket << " Qatari Rial left" << endl;
            }
        }
    }
    if (nofpeople >= 25 && nofpeople <= 49)
    {
        budget = fee * 0.60;
        if (category == "vip")
        {
            ticket = nofpeople * 499.99;
            if (ticket > budget)
            {
                ticket = ticket - budget;
                cout << "Not Enough Money! You need " << ticket << " Qatari Rial" << endl;
            }
            else
            {
                ticket = budget - ticket;
                cout << "Yes You have  " << ticket << " Qatari Rial left" << endl;
            }
        }
        else
        {
            ticket = nofpeople * 249.99;
            if (ticket > budget)
            {
                ticket = ticket - budget;
                cout << "Not Enough Money! You need " << ticket << " Qatari Rial" << endl;
            }
            else
            {
                ticket = budget - ticket;
                cout << "Yes You have  " << ticket << " Qatari Rial left" << endl;
            }
        }
    }
    if (nofpeople >= 50 && nofpeople <= 200)
    {
        budget = fee * 0.75;
        if (category == "vip")
        {
            ticket = nofpeople * 499.99;
            if (ticket > budget)
            {
                ticket = ticket - budget;
                cout << "Not Enough Money! You need " << ticket << " Qatari Rial" << endl;
            }
            else
            {
                ticket = budget - ticket;
                cout << "Yes You have  " << ticket << " Qatari Rial left" << endl;
            }
        }
        else
        {
            ticket = nofpeople * 249.99;
            if (ticket > budget)
            {
                ticket = ticket - budget;
                cout << "Not Enough Money! You need " << ticket << " Qatari Rial" << endl;
            }
            else
            {
                ticket = budget - ticket;
                cout << "Yes You have  " << ticket << " Qatari Rial left" << endl;
            }
        }
    }
    

}
