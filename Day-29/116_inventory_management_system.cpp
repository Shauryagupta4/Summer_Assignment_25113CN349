#include <iostream>
#include <string>

int main() {
    int itemIds[100];
    std::string itemNames[100];
    int itemQuantities[100];
    double itemPrices[100];
    
    int totalItems = 0;
    int choice;

    while (true) {
        std::cout << std::endl << "=== INVENTORY MANAGEMENT SYSTEM ===" << std::endl;
        std::cout << "1. Add New Item" << std::endl;
        std::cout << "2. View Stock Inventory" << std::endl;
        std::cout << "3. Update Item Quantity" << std::endl;
        std::cout << "4. Search Item by ID" << std::endl;
        std::cout << "5. Exit" << std::endl;
        std::cout << "Enter choice: ";
        std::cin >> choice;

        if (choice == 1) {
            if (totalItems >= 100) {
                std::cout << "Inventory storage is full!" << std::endl;
            } 
            else {
                std::cout << "Enter Item ID (number): ";
                std::cin >> itemIds[totalItems];
                std::cin.ignore();

                std::cout << "Enter Item Name: ";
                std::getline(std::cin, itemNames[totalItems]);

                std::cout << "Enter Stock Quantity: ";
                std::cin >> itemQuantities[totalItems];

                std::cout << "Enter Unit Price: $";
                std::cin >> itemPrices[totalItems];

                totalItems++;
                std::cout << "Item added to inventory successfully!" << std::endl;
            }
        }
        else if (choice == 2) {
            if (totalItems == 0) {
                std::cout << "Inventory is completely empty." << std::endl;
            } 
            else {
                std::cout << std::endl << "--- CURRENT INVENTORY STOCK ---" << std::endl;
                for (int i = 0; i < totalItems; i++) {
                    std::cout << "ID: " << itemIds[i] 
                              << " | Name: " << itemNames[i] 
                              << " | Qty: " << itemQuantities[i] 
                              << " | Price: $" << itemPrices[i] << std::endl;
                }
            }
        }
        else if (choice == 3) {
            if (totalItems == 0) {
                std::cout << "Inventory is empty. Nothing to update." << std::endl;
            } 
            else {
                int searchId;
                bool found = false;
                std::cout << "Enter Item ID to update quantity: ";
                std::cin >> searchId;

                for (int i = 0; i < totalItems; i++) {
                    if (itemIds[i] == searchId) {
                        std::cout << "Current Quantity for " << itemNames[i] << " is: " << itemQuantities[i] << std::endl;
                        std::cout << "Enter New Quantity: ";
                        std::cin >> itemQuantities[i];
                        std::cout << "Stock quantity updated successfully!" << std::endl;
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    std::cout << "Item ID not found." << std::endl;
                }
            }
        }
        else if (choice == 4) {
            if (totalItems == 0) {
                std::cout << "Inventory is empty. Nothing to search." << std::endl;
            } 
            else {
                int searchId;
                bool found = false;
                std::cout << "Enter Item ID to search: ";
                std::cin >> searchId;

                for (int i = 0; i < totalItems; i++) {
                    if (itemIds[i] == searchId) {
                        std::cout << std::endl << "--- ITEM DETAILS ---" << std::endl;
                        std::cout << "ID: " << itemIds[i] << std::endl;
                        std::cout << "Name: " << itemNames[i] << std::endl;
                        std::cout << "Quantity: " << itemQuantities[i] << std::endl;
                        std::cout << "Price: $" << itemPrices[i] << std::endl;
                        std::cout << "Total Value: $" << itemQuantities[i] * itemPrices[i] << std::endl;
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    std::cout << "Item ID not found." << std::endl;
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
