#include <iostream>
using namespace std;

class MyHome
{
    public:
    string memName(string name)
    {
        cout << "All members name are\n";

            for (int i = 0; i < 5; i++){
                     cout << i << "." << name << "\n" << endl;
                 }
    return 0;
    }
};

int main()
{

MyHome home;
home.memName("janak");
home.memName("janak");
home.memName("janak");

    return 0;
}
