#include <iostream>
#include <string>

int main() {
    int bookIds[100];
    std::string bookTitles[100];
    std::string bookAuthors[100];
    
    int totalBooks = 0; 
    int choice;

    while (true) {
        std::cout << std::endl << "=== LIBRARY SYSTEM ===" << std::endl;
        std::cout << "1. Add Book" << std::endl;
        std::cout << "2. Display All Books" << std::endl;
        std::cout << "3. Search Book by ID" << std::endl;
        std::cout << "4. Exit" << std::endl;
        std::cout << "Enter choice: ";
        std::cin >> choice;

        if (choice == 1) {
            if (totalBooks >= 100) {
                std::cout << "Library is full!" << std::endl;
            } 
            else {
                std::cout << "Enter Book ID (number): ";
                std::cin >> bookIds[totalBooks];
                std::cin.ignore();

                std::cout << "Enter Title: ";
                std::getline(std::cin, bookTitles[totalBooks]);

                std::cout << "Enter Author: ";
                std::getline(std::cin, bookAuthors[totalBooks]);

                totalBooks++; 
                std::cout << "Book added successfully!" << std::endl;
            }
        }
        else if (choice == 2) {
            if (totalBooks == 0) {
                std::cout << "No books in the library." << std::endl;
            } 
            else {
                std::cout << std::endl << "--- BOOK LIST ---" << std::endl;
                for (int i = 0; i < totalBooks; i++) {
                    std::cout << "ID: " << bookIds[i] 
                              << " | Title: " << bookTitles[i] 
                              << " | Author: " << bookAuthors[i] << std::endl;
                }
            }
        }
        else if (choice == 3) {
            if (totalBooks == 0) {
                std::cout << "Library is empty." << std::endl;
            } 
            else {
                int searchId;
                bool found = false;
                std::cout << "Enter ID to search: ";
                std::cin >> searchId;

                for (int i = 0; i < totalBooks; i++) {
                    if (bookIds[i] == searchId) {
                        std::cout << std::endl << "Found! Title: " << bookTitles[i] 
                                  << ", Author: " << bookAuthors[i] << std::endl;
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    std::cout << "Book ID not found." << std::endl;
                }
            }
        }
        else if (choice == 4) {
            std::cout << "Goodbye!" << std::endl;
            break;
        }
        else {
            std::cout << "Invalid option! Try again." << std::endl;
        }
    }

    return 0;
}
