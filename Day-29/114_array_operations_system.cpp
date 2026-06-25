#include <iostream>

int main() {
    int arr[100];
    int size = 0;
    int choice;

    while (true) {
        std::cout << std::endl << "=== ARRAY OPERATIONS SYSTEM ===" << std::endl;
        std::cout << "1. Insert Element" << std::endl;
        std::cout << "2. Display Array" << std::endl;
        std::cout << "3. Search Element" << std::endl;
        std::cout << "4. Delete Element" << std::endl;
        std::cout << "5. Exit" << std::endl;
        std::cout << "Enter choice: ";
        std::cin >> choice;

        if (choice == 1) {
            if (size >= 100) {
                std::cout << "Array storage is full!" << std::endl;
            } 
            else {
                std::cout << "Enter integer value to insert: ";
                std::cin >> arr[size];
                size++;
                std::cout << "Element inserted successfully!" << std::endl;
            }
        }
        else if (choice == 2) {
            if (size == 0) {
                std::cout << "Array is empty." << std::endl;
            } 
            else {
                std::cout << "Array elements: ";
                for (int i = 0; i < size; i++) {
                    std::cout << arr[i] << " ";
                }
                std::cout << std::endl;
            }
        }
        else if (choice == 3) {
            if (size == 0) {
                std::cout << "Array is empty. Nothing to search." << std::endl;
            } 
            else {
                int target;
                bool found = false;
                std::cout << "Enter value to search: ";
                std::cin >> target;

                for (int i = 0; i < size; i++) {
                    if (arr[i] == target) {
                        std::cout << "Found! Value " << target << " is at index " << i << std::endl;
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    std::cout << "Value not found in array." << std::endl;
                }
            }
        }
        else if (choice == 4) {
            if (size == 0) {
                std::cout << "Array is empty. Nothing to delete." << std::endl;
            } 
            else {
                int target;
                bool found = false;
                std::cout << "Enter value to delete: ";
                std::cin >> target;

                for (int i = 0; i < size; i++) {
                    if (arr[i] == target) {
                        for (int j = i; j < size - 1; j++) {
                            arr[j] = arr[j + 1];
                        }
                        size--;
                        std::cout << "Value deleted successfully!" << std::endl;
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    std::cout << "Value not found in array." << std::endl;
                }
            }
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
