#include <iostream> // Required for input/output operations (cin, cout)

int main() {
    double num1, num2; // Declare variables to store the two numbers
    char operation;    // Declare a variable to store the chosen operation

    std::cout << "Welcome to the Basic Calculator!" << std::endl;

    // Get the first number from the user
    std::cout << "Enter the first number: ";
    std::cin >> num1;

    // Get the second number from the user
    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // Get the desired operation from the user
    std::cout << "Choose an operation (+, -, *, /): ";
    std::cin >> operation;

    // Perform the chosen operation using a switch statement
    switch (operation) {
        case '+':
            std::cout << "Result: " << num1 << " + " << num2 << " = " << (num1 + num2) << std::endl;
            break; // Exit the switch statement
        case '-':
            std::cout << "Result: " << num1 << " - " << num2 << " = " << (num1 - num2) << std::endl;
            break;
        case '*':
            std::cout << "Result: " << num1 << " * " << num2 << " = " << (num1 * num2) << std::endl;
            break;
        case '/':
            // Check for division by zero to prevent errors
            if (num2 != 0) {
                std::cout << "Result: " << num1 << " / " << num2 << " = " << (num1 / num2) << std::endl;
            } else {
                std::cout << "Error: Division by zero is not allowed." << std::endl;
            }
            break;
        default:
            // Handle cases where the user enters an invalid operation
            std::cout << "Error: Invalid operation. Please choose from +, -, *, /." << std::endl;
            break;
    }

    // Return 0 to indicate successful execution of the program
    return 0;
}