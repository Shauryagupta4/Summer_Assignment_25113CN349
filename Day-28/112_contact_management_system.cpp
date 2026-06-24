#include <iostream>
#include <string>

int main() {
    std::string names[100];
    std::string phones[100];
    std::string emails[100];
    
    int totalContacts = 0;
    int choice;

    while (true) {
        std::cout << std::endl << "=== CONTACT MANAGEMENT SYSTEM ===" << std::endl;
        std::cout << "1. Add Contact" << std::endl;
        std::cout << "2. View All Contacts" << std::endl;
        std::cout << "3. Search Contact" << std::endl;
        std::cout << "4. Exit" << std::endl;
        std::cout << "Enter choice: ";
        std::cin >> choice;

        if (choice == 1) {
            if (totalContacts >= 100) {
                std::cout << "Contact storage is full!" << std::endl;
            } 
            else {
                std::cin.ignore();
                std::cout << "Enter Name: ";
                std::getline(std::cin, names[totalContacts]);

                std::cout << "Enter Phone Number: ";
                std::getline(std::cin, phones[totalContacts]);

                std::cout << "Enter Email Address: ";
                std::getline(std::cin, emails[totalContacts]);

                totalContacts++;
                std::cout << "Contact saved successfully!" << std::endl;
            }
        }
        else if (choice == 2) {
            if (totalContacts == 0) {
                std::cout << "No contacts found." << std::endl;
            } 
            else {
                std::cout << std::endl << "--- CONTACT LIST ---" << std::endl;
                for (int i = 0; i < totalContacts; i++) {
                    std::cout << "Name: " << names[i] 
                              << " | Phone: " << phones[i] 
                              << " | Email: " << emails[i] << std::endl;
                }
            }
        }
        else if (choice == 3) {
            if (totalContacts == 0) {
                std::cout << "No contacts to search." << std::endl;
            } 
            else {
                std::string searchName;
                bool found = false;
                std::cin.ignore();
                
                std::cout << "Enter Name to search: ";
                std::getline(std::cin, searchName);

                for (int i = 0; i < totalContacts; i++) {
                    if (names[i] == searchName) {
                        std::cout << std::endl << "Contact Found!" << std::endl;
                        std::cout << "Name: " << names[i] << std::endl;
                        std::cout << "Phone: " << phones[i] << std::endl;
                        std::cout << "Email: " << emails[i] << std::endl;
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    std::cout << "Contact not found." << std::endl;
                }
            }
        }
        else if (choice == 4) {
            std::cout << "Exiting system. Goodbye!" << std::endl;
            break;
        }
        else {
            std::cout << "Invalid option! Try again." << std::endl;
        }
    }

    return 0;
}
