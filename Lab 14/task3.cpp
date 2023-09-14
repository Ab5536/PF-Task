#include <iostream>
#include <fstream>
using namespace std;
void arraychange(int newarr[], int num1, int arr[], int num, int narr[], int sum);
int main()
{
    cout << "\t\t\t<<<<<<<<<>>>>>>>>>>>>\n";
    int num, num1;
    num1 = 3;
    num = 2;
    int number1[num1] = {1, 2, 3};
    int number2[num] = {4, 5};
    int sum = num1 + num;
    int narr[sum];
    arraychange(number1, num1, number2, num, narr, sum);
    for (int x = 0; x < sum; x++)
    {
        cout << narr[x] << "\t";
    }
    cout << "\n\t\t\t<<<<<<<<<>>>>>>>>>>>>";
}
void arraychange(int newarr[], int num1, int arr[], int num, int narr[], int sum)
{

    int x = 0;
    for (int i = 0; i < sum; i++)
    {
        if (i < num1)
        {
            narr[i] = newarr[i];
        }
        else
        {
            narr[i] = arr[x];
            x++;
        }
    }
}