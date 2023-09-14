#include <iostream>
using namespace std;
int main()
{

    int arr[3][4] = {{1, 2, 3, 4}, {-5, 6, 7, 8}, {12, 11, 10, 9}};
    int great = arr[0][0];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)

            if (great < arr[i][j])
            {
                great = arr[i][j];
            }
    }

    cout << great;
    return 0;
}
// cout<<