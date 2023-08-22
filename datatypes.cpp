#include <iostream>
#include <string>
using namespace std;
int main()
{
int a = 6;
// int is integer data type.
string name = "janak";
// string is string data type
float v = 56.65f;
// float is floating point number, f stands for fixed-point notation and it has precision of 7 digits after decimal point (1234
double d = 6.6666666666666666666666666666666666555555555555555555555555;
// double is floating point number, it can be written in scientific notation also.
char answer = 'A';
// char is character datatype which stores single letter or symbol only.
bool b = true;
// boolean value
// is either true/false and has no decimal values.


string list[2] = {"janak", "Dhami"};
int count = 2;
for (int i = 0; i < count; i++)
{
  cout << list[i] << "\t";
}

return 0;
}

