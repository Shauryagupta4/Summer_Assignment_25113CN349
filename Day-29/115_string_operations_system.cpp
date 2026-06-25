#include <iostream>
#include <string>

int main() {
    std::string str1;
    std::string str2;
    int choice;

    while (true) {
        std::cout << std::endl << "=== STRING OPERATIONS SYSTEM ===" << std::endl;
        std::cout << "1. Find String Length" << std::endl;
        std::cout << "2. Concatenate (Join) Strings" << std::endl;
        std::cout << "3. Compare Two Strings" << std::endl;
        std::cout << "4. Reverse a String" << std::endl;
        std::cout << "5. Exit" << std::endl;
        std::cout << "Enter choice: ";
        std::cin >> choice;
        std::cin.ignore();

        if (choice == 1) {
            std::cout << "Enter a string: ";
            std::getline(std::cin, str1);
            std::cout << "Length of the string: " << str1.length() << std::endl;
        }
        else if (choice == 2) {
            std::cout << "Enter first string: ";
            std::getline(std::cin, str1);
            std::cout << "Enter second string: ";
            std::getline(std::cin, str2);
            std::cout << "Joined string: " << str1 + str2 << std::endl;
        }
        else if (choice == 3) {
            std::cout << "Enter first string: ";
            std::getline(std::cin, str1);
            std::cout << "Enter second string: ";
            std::getline(std::cin, str2);
            
            if (str1 == str2) {
                std::cout << "Strings are completely equal!" << std::endl;
            } 
            else {
                std::cout << "Strings are different!" << std::endl;
            }
        }
        else if (choice == 4) {
            std::cout << "Enter a string to reverse: ";
            std::getline(std::cin, str1);
            
            std::cout << "Reversed string: ";
            for (int i = str1.length() - 1; i >= 0; i--) {
                std::cout << str1[i];
            }
            std::cout << std::endl;
        }
        else if (choice == 5) {
            std::cout << "Exiting system. Goodbye!" << std::endl;
            break;
        }
        else {
            std::cout << "Invalid option! Try again." << std::endl;
        }
    }

    return 0;
}
