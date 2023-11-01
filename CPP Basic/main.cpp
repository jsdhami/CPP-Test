#include <iostream>
using namespace std;

int main() {
    int arr[5]; // declaring an integer array of size 5
    arr[0] = 1; // assigning value 1 to the first element of the array
    arr[1] = 2; // assigning value 2 to the second element of the array
    arr[2] = 3; // assigning value 3 to the third element of the array
    arr[3] = 4; // assigning value 4 to the fourth element of the array
    arr[4] = 5; // assigning value 5 to the fifth element of the array

    // printing the values of the array
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
