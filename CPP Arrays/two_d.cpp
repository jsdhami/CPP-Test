#include <iostream>
using namespace std;
int main() {
        

// this is Two D array example
    int arr_two[5][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
    };

    string name[2][2][2] = {
        {
            {"A", "B"},
            {"C", "D"}
        },
        {
            {"E", "F"},
            {"G", "H"}
        }
    };


    cout << name[0][0][0] << endl;


    // for(int i = 0; i < 5; i++) {
    //     for(int j = 0; j < 5; j++) {
    //         cout << arr_two[i][j] << " ";
    //     }
    //     cout << endl;
    // }


    // for (int i = 0; i < 5; i++)
    // {
    //    for (int j = 0; j < 5; j++)
    // {
    //  cout << arr_two[i][j] << " "; 
     
    // }   
    //  cout << endl;   
    // }

    return 0;
}
