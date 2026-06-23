#include <iostream>
#include <string>

struct Employee {
    int id;
    std::string name;
    std::string department;
    double salary;
};

int main() {
    const int MAX_EMPLOYEES = 100; 
    Employee staff[MAX_EMPLOYEES]; 
    int currentCount = 0;
    int choice;

    while (true) {
        std::cout << "=========================================" << std::endl;
        std::cout << "       EMPLOYEE MANAGEMENT SYSTEM        " << std::endl;
        std::cout << "=========================================" << std::endl;
        std::cout << "1. Add New Employee Record" << std::endl;
        std::cout << "2. Display All Employee Records" << std::endl;
        std::cout << "3. Search Employee by ID" << std::endl;
        std::cout << "4. Exit System" << std::endl;
        std::cout << "=========================================" << std::endl;
        std::cout << "Enter your choice (1-4): ";
        std::cin >> choice;
        std::cout << std::endl;

        if (choice == 1) {
            if (currentCount >= MAX_EMPLOYEES) {
                std::cout << "Error: Storage capacity full!" << std::endl << std::endl;
            } else {
                std::cout << "Enter Employee ID: ";
                std::cin >> staff[currentCount].id;
                
                std::cout << "Enter Employee Name (No spaces): ";
                std::cin >> staff[currentCount].name;

                std::cout << "Enter Department: ";
                std::cin >> staff[currentCount].department;
                
                std::cout << "Enter Monthly Salary: $";
                std::cin >> staff[currentCount].salary;
                
                currentCount++;
                std::cout << "--> Record added successfully!" << std::endl << std::endl;
            }
        }

        else if (choice == 2) {
            if (currentCount == 0) {
                std::cout << "No employee records found in the database." << std::endl << std::endl;
            } 
            else {
                std::cout << "-------------------------------------------------------------" << std::endl;
                std::cout << "ID\tName\t\tDepartment\tSalary" << std::endl;
                std::cout << "-------------------------------------------------------------" << std::endl;
                for (int i = 0; i < currentCount; i++) {
                    std::cout << staff[i].id << "\t" 
                              << staff[i].name << "\t\t" 
                              << staff[i].department << "\t\t$" 
                              << staff[i].salary << std::endl;
                }
                std::cout << "-------------------------------------------------------------" << std::endl << std::endl;
            }
        }

        else if (choice == 3) {
            if (currentCount == 0) {
                std::cout << "Database empty. Nothing to search." << std::endl << std::endl;
            } 
            else {
                int searchId;
                bool found = false;
                std::cout << "Enter Employee ID to search: ";
                std::cin >> searchId;

                for (int i = 0; i < currentCount; i++) {
                    if (staff[i].id == searchId) {
                        std::cout << std::endl << "--> Record Found!" << std::endl;
                        std::cout << "ID        : " << staff[i].id << std::endl;
                        std::cout << "Name      : " << staff[i].name << std::endl;
                        std::cout << "Department: " << staff[i].department << std::endl;
                        std::cout << "Salary    : $" << staff[i].salary << std::endl << std::endl;
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    std::cout << "--> Employee with ID " << searchId << " not found." << std::endl << std::endl;
                }
            }
        }

        else if (choice == 4) {
            std::cout << "Exiting management system. Goodbye!" << std::endl;
            break;
        }
        else {
            std::cout << "Invalid selection! Please pick a number from 1 to 4." << std::endl << std::endl;
        }
    }

    return 0;
}
