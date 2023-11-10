#include <iostream>

// function to add two numbers
int add(int num1, int num2) {
    return num1 + num2;
}

int main() {
    int num1, num2;
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    int sum = add(num1, num2);
    std::cout << "Sum of " << num1 << " and " << num2 << " is " << sum << std::endl;
    return 0;
}
