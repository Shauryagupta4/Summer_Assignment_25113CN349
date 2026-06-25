#include <iostream>

int main() {
    double num1;
    double num2;
    char op;
    int choice;

    while (true) {
        std::cout << std::endl << "=== CALCULATOR SYSTEM ===" << std::endl;
        std::cout << "1. Perform Calculation" << std::endl;
        std::cout << "2. Exit" << std::endl;
        std::cout << "Enter choice: ";
        std::cin >> choice;

        if (choice == 1) {
            std::cout << "Enter first number: ";
            std::cin >> num1;

            std::cout << "Enter operator (+, -, *, /): ";
            std::cin >> op;

            std::cout << "Enter second number: ";
            std::cin >> num2;

            switch (op) {
                case '+':
                    std::cout << "Result: " << num1 + num2 << std::endl;
                    break;
                case '-':
                    std::cout << "Result: " << num1 - num2 << std::endl;
                    break;
                case '*':
                    std::cout << "Result: " << num1 * num2 << std::endl;
                    break;
                case '/':
                    if (num2 == 0) {
                        std::cout << "Error: Division by zero is not allowed!" << std::endl;
                    } else {
                        std::cout << "Result: " << num1 / num2 << std::endl;
                    }
                    break;
                default:
                    std::cout << "Error: Invalid operator chosen!" << std::endl;
                    break;
            }
        } 
        else if (choice == 2) {
            std::cout << "Exiting calculator. Goodbye!" << std::endl;
            break;
        } 
        else {
            std::cout << "Invalid option! Try again." << std::endl;
        }
    }

    return 0;
}
