#include <iostream>
#include <string>

int main() {
    int bookIds[50];
    std::string bookTitles[50];
    bool isAvailable[50];
    
    int totalBooks = 0;
    int choice;

    while (true) {
        std::cout << std::endl << "=== MINI LIBRARY SYSTEM ===" << std::endl;
        std::cout << "1. Add New Book" << std::endl;
        std::cout << "2. Display Shelf Inventory" << std::endl;
        std::cout << "3. Issue / Borrow Book" << std::endl;
        std::cout << "4. Return Issued Book" << std::endl;
        std::cout << "5. Exit" << std::endl;
        std::cout << "Enter choice: ";
        std::cin >> choice;

        if (choice == 1) {
            if (totalBooks >= 50) {
                std::cout << "Mini shelf storage limit reached!" << std::endl;
            } 
            else {
                std::cout << "Enter Book ID (number): ";
                std::cin >> bookIds[totalBooks];
                std::cin.ignore();

                std::cout << "Enter Book Title: ";
                std::getline(std::cin, bookTitles[totalBooks]);

                isAvailable[totalBooks] = true;

                totalBooks++;
                std::cout << "Book successfully registered on shelf!" << std::endl;
            }
        }
        else if (choice == 2) {
            if (totalBooks == 0) {
                std::cout << "The library shelf is empty." << std::endl;
            } 
            else {
                std::cout << std::endl << "--- SHELF INVENTORY ---" << std::endl;
                for (int i = 0; i < totalBooks; i++) {
                    std::cout << "ID: " << bookIds[i] 
                              << " | Title: " << bookTitles[i] 
                              << " | Status: " << (isAvailable[i] ? "Available" : "Borrowed") << std::endl;
                }
            }
        }
        else if (choice == 3) {
            if (totalBooks == 0) {
                std::cout << "No books registered in the system." << std::endl;
            } 
            else {
                int searchId;
                bool found = false;
                std::cout << "Enter Book ID to issue: ";
                std::cin >> searchId;

                for (int i = 0; i < totalBooks; i++) {
                    if (bookIds[i] == searchId) {
                        found = true;
                        if (isAvailable[i]) {
                            isAvailable[i] = false;
                            std::cout << "Success! \"" << bookTitles[i] << "\" has been issued." << std::endl;
                        } else {
                            std::cout << "Sorry, this book is already checked out by someone else." << std::endl;
                        }
                        break;
                    }
                }
                if (!found) {
                    std::cout << "Book record not found." << std::endl;
                }
            }
        }
        else if (choice == 4) {
            if (totalBooks == 0) {
                std::cout << "No books registered in the system." << std::endl;
            } 
            else {
                int searchId;
                bool found = false;
                std::cout << "Enter Book ID to return: ";
                std::cin >> searchId;

                for (int i = 0; i < totalBooks; i++) {
                    if (bookIds[i] == searchId) {
                        found = true;
                        if (!isAvailable[i]) {
                            isAvailable[i] = true;
                            std::cout << "Thank you! \"" << bookTitles[i] << "\" is returned to shelf." << std::endl;
                        } 
                        else {
                            std::cout << "This book is already marked available on the shelf." << std::endl;
                        }
                        break;
                    }
                }
                if (!found) {
                    std::cout << "Book record not found." << std::endl;
                }
            }
        }
        else if (choice == 5) {
            std::cout << "Closing system. Goodbye!" << std::endl;
            break;
        }
        else {
            std::cout << "Invalid choice! Choose between 1 and 5." << std::endl;
        }
    }

    return 0;
}
