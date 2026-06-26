#include <iostream>
#include <string>

int main() {
    int employeeIds[100];
    std::string employeeNames[100];
    std::string employeeDepartments[100];
    
    int totalEmployees = 0;
    int choice;

    while (true) {
        std::cout << std::endl << "=== MINI EMPLOYEE MANAGEMENT SYSTEM ===" << std::endl;
        std::cout << "1. Add Employee" << std::endl;
        std::cout << "2. View All Employees" << std::endl;
        std::cout << "3. Search Employee by ID" << std::endl;
        std::cout << "4. Exit" << std::endl;
        std::cout << "Enter choice: ";
        std::cin >> choice;

        if (choice == 1) {
            if (totalEmployees >= 100) {
                std::cout << "Employee database is full!" << std::endl;
            } 
            else {
                std::cout << "Enter Employee ID: ";
                std::cin >> employeeIds[totalEmployees];
                std::cin.ignore();

                std::cout << "Enter Employee Name: ";
                std::getline(std::cin, employeeNames[totalEmployees]);

                std::cout << "Enter Department: ";
                std::getline(std::cin, employeeDepartments[totalEmployees]);

                totalEmployees++;
                std::cout << "Employee record added successfully!" << std::endl;
            }
        }
        else if (choice == 2) {
            if (totalEmployees == 0) {
                std::cout << "No employees found in the system." << std::endl;
            } 
            else {
                std::cout << std::endl << "--- EMPLOYEE ROSTER ---" << std::endl;
                for (int i = 0; i < totalEmployees; i++) {
                    std::cout << "ID: " << employeeIds[i] 
                              << " | Name: " << employeeNames[i] 
                              << " | Dept: " << employeeDepartments[i] << std::endl;
                }
            }
        }
        else if (choice == 3) {
            if (totalEmployees == 0) {
                std::cout << "Database is empty. Nothing to search." << std::endl;
            } 
            else {
                int searchId;
                bool found = false;
                std::cout << "Enter Employee ID to search: ";
                std::cin >> searchId;

                for (int i = 0; i < totalEmployees; i++) {
                    if (employeeIds[i] == searchId) {
                        std::cout << std::endl << "--- EMPLOYEE FOUND ---" << std::endl;
                        std::cout << "ID: " << employeeIds[i] << std::endl;
                        std::cout << "Name: " << employeeNames[i] << std::endl;
                        std::cout << "Department: " << employeeDepartments[i] << std::endl;
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    std::cout << "Employee ID not found." << std::endl;
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
