#include <iostream>
using namespace std;
int main()
{
    int arr_three[2][2][2] = {
        {{1, 2}, {3, 4}},
        {{5, 6}, {7, 8}}
    };
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                cout << arr_three[i][j][k] << " ";
            }
        }
    cout << endl;
    }
 return 0;
}