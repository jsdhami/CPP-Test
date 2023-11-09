#include <iostream>
using namespace std;
int main() {
    int a = 10;
    if (a > 5 )
    {
        cout << "a is greater than 5" << endl;
    }else if (a < 5)
    {
        cout << "a is less than 5" << endl;
    }else
    {
        cout << "a is equal to 5" << endl;
    }
    string name = "Janak";
    if (name == "Janak")
    {
        cout << "Name is Janak" << endl;
    }else if (name == "Raj")
    {
        cout << "Name is Raj" << endl;
        }else
        {
            cout << "Name is not Janak or Raj";
        }
    return 0;
}