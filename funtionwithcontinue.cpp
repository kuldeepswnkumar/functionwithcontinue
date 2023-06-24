#include <iostream>

// Function declaration (or function prototype)
int addNumbers(int a, int b);
int subtractNumbers(int a, int b);

// Function definition
int addNumbers(int a, int b) {
    int sum = a + b;
    return sum;
}

// Function definition
int subtractNumbers(int a, int b) {
    int difference = a - b;
    return difference;
}

// Main function
int main() {
    int num1, num2, result;

    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // Function calls
    result = addNumbers(num1, num2);
    std::cout << "The sum of " << num1 << " and " << num2 << " is: " << result << std::endl;

    result = subtractNumbers(num1, num2);
    std::cout << "The difference between " << num1 << " and " << num2 << " is: " << result << std::endl;

    return 0;
}
