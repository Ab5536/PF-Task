#include <iostream>
using namespace std;

main()
{
    int index, y = 0, sum = 0, avg = 0;
    char single, test;
    bool found;
    string name;
    cout << "Enter String : ";
    getline(cin, name);
    cout<<"Enter Character : ";
    cin>>single;
    for (int x = 0; true; x++)
    {
        if (name[x] == '\0')
        {
            y = x-1;
            break;
        }
    }
    if(name[y]==single){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False";
    }
}