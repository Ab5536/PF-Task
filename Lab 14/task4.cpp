#include <iostream>
#include <fstream>
using namespace std;
void arraychange(int narr[], int num, int num1);
int main()
{
    cout << "\t\t\t<<<<<<<<<>>>>>>>>>>>>\n";
    int num, num1;
    cout << "Enter the Left rotate position: ";
    cin >> num1;
    cout << "Enter number of digits: ";
    cin >> num;
    int narr[num];
    for (int x = 0; x < num; x++)
    {
        cout << "Enter Number " << x + 1 << " : ";
        cin >> narr[x];
    }
    arraychange(narr, num, num1);
    for (int x = 0; x < num; x++)
    {
        cout << narr[x] << "\t";
    }
    cout << "\n\t\t\t<<<<<<<<<>>>>>>>>>>>>";
}

void arraychange(int narr[], int num, int num1)
{
    int arr[num1];
    int z = 0;
    for (int i = 0; i < num; i++)
    {
        if (i == num1)
        {
            for (int x = 0; x < num1; x++)
            {
                arr[x] = narr[x];
            }
            for (int y = 0; y < (num - num1); y++)
            {
                narr[y] = narr[num1 + y];
            }
            for (int x = (num - num1); x < num; x++)
            {
                narr[x] = arr[z];
                z++;
            }
        }
    }
}
