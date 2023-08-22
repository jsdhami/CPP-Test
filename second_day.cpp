#include <iostream>
using namespace std;
// function/method in cpp
//  is a block of code which can be called by other functions or methods.
//  syntax: function_name(){......code.....}
void myFunction()
{
    cout << "Hello World" << endl;
}

void intro(string fname)
{
    cout << "My name is " << fname;
}

// main function in cpp
int main()
{
    // function calling in cpp
    myFunction();
    intro("janak\n");
    intro("rajesh\n");
    intro("rajesh\n");
    intro("rajesh\n");
    intro("rajesh\n");
    intro("rajesh\n");
    return 0;
}
