#include <iostream>

using namespace std;

class MyInfo{
    public:
    string name;
    string phone;
};

void janu(int x, int y);
//function declared

class Test {       // The class
  public:             // Access specifier
   string myNum;        // Attribute (int variable)
    string myString;  // Attribute (string variable)

int area(int l, int b){
    
   int a = 2*(l*b);
    return(a) ;
}

};

int main() {
Test tk; //object creation

tk.myNum=10;//assigning value to attribute of object
cout<<"Area is "<<tk.area(5 ,6)<<endl;
janu(5, 5);
MyInfo datas;
datas.name = "Janak Singh Dhami";
datas.phone = "9745445284";
cout << "My Name is " << datas.name; 
cout << " and " <<"My Phone number is " << datas.phone;



return 0;

}
//function defination
void janu(int x, int y){
    int sum = x + y;
    cout << "Sum of two numbers is: "<<sum<<endl;
    
}
