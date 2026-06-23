#include <iostream>
#include <string>

struct Student {
    int rollNumber;
    std::string name;
    double sgpa;
};

int main() {
    const int MAX_STUDENTS = 100; 
    Student records[MAX_STUDENTS];
    int currentCount = 0;
    int choice;

    while (true) {
        std::cout << "=========================================" << std::endl;
        std::cout << "    STUDENT RECORD MANAGEMENT SYSTEM     " << std::endl;
        std::cout << "=========================================" << std::endl;
        std::cout << "1. Add New Student Record" << std::endl;
        std::cout << "2. Display All Student Records" << std::endl;
        std::cout << "3. Search Student by Roll Number" << std::endl;
        std::cout << "4. Exit System" << std::endl;
        std::cout << "=========================================" << std::endl;
        std::cout << "Enter your choice (1-4): ";
        std::cin >> choice;
        std::cout << std::endl;

        if (choice == 1) {
            if (currentCount >= MAX_STUDENTS) {
                std::cout << "Error: Storage capacity full!" << std::endl << std::endl;
            } 
            else {
                std::cout << "Enter Roll Number: ";
                std::cin >> records[currentCount].rollNumber;
                
                std::cout << "Enter Student Name (No spaces): ";
                std::cin >> records[currentCount].name;
                
                std::cout << "Enter SGPA: ";
                std::cin >> records[currentCount].sgpa;
                
                currentCount++;
                std::cout << "--> Record added successfully!" << std::endl << std::endl;
            }
        }

        else if (choice == 2) {
            if (currentCount == 0) {
                std::cout << "No student records found in the database." << std::endl << std::endl;
            } 
            else {
                std::cout << "-----------------------------------------" << std::endl;
                std::cout << "Roll No.\tName\t\tGPA" << std::endl;
                std::cout << "-----------------------------------------" << std::endl;
                for (int i = 0; i < currentCount; i++) {
                    std::cout << records[i].rollNumber << "\t\t" 
                              << records[i].name << "\t\t" 
                              << records[i].sgpa << std::endl;
                }
                std::cout << "-----------------------------------------" << std::endl << std::endl;
            }
        }

        else if (choice == 3) {
            if (currentCount == 0) {
                std::cout << "Database empty. Nothing to search." << std::endl << std::endl;
            } 
            else {
                int searchRoll;
                bool found = false;
                std::cout << "Enter Roll Number to search: ";
                std::cin >> searchRoll;

                for (int i = 0; i < currentCount; i++) {
                    if (records[i].rollNumber == searchRoll) {
                        std::cout << std::endl << "--> Record Found!" << std::endl;
                        std::cout << "Name: " << records[i].name << std::endl;
                        std::cout << "GPA : " << records[i].sgpa << std::endl << std::endl;
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    std::cout << "--> Student with Roll Number " << searchRoll << " not found." << std::endl << std::endl;
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
