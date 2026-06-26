#include <iostream>
#include <string>

int main() {
    int rollNumbers[100];
    std::string studentNames[100];
    double studentMarks[100];
    
    int totalStudents = 0;
    int choice;

    while (true) {
        std::cout << std::endl << "=== STUDENT RECORD SYSTEM ===" << std::endl;
        std::cout << "1. Add Student Record" << std::endl;
        std::cout << "2. View All Records" << std::endl;
        std::cout << "3. Search Student by Roll No" << std::endl;
        std::cout << "4. Exit" << std::endl;
        std::cout << "Enter choice: ";
        std::cin >> choice;

        if (choice == 1) {
            if (totalStudents >= 100) {
                std::cout << "Database storage is full!" << std::endl;
            } 
            else {
                std::cout << "Enter Roll Number: ";
                std::cin >> rollNumbers[totalStudents];
                std::cin.ignore();

                std::cout << "Enter Student Name: ";
                std::getline(std::cin, studentNames[totalStudents]);

                std::cout << "Enter Marks: ";
                std::cin >> studentMarks[totalStudents];

                totalStudents++;
                std::cout << "Student record added successfully!" << std::endl;
            }
        }
        else if (choice == 2) {
            if (totalStudents == 0) {
                std::cout << "No student records found." << std::endl;
            } 
            else {
                std::cout << std::endl << "--- STUDENT RECORDS ---" << std::endl;
                for (int i = 0; i < totalStudents; i++) {
                    std::cout << "Roll No: " << rollNumbers[i] 
                              << " | Name: " << studentNames[i] 
                              << " | Marks: " << studentMarks[i] << std::endl;
                }
            }
        }
        else if (choice == 3) {
            if (totalStudents == 0) {
                std::cout << "Database is empty. Nothing to search." << std::endl;
            } 
            else {
                int searchRoll;
                bool found = false;
                std::cout << "Enter Roll Number to search: ";
                std::cin >> searchRoll;

                for (int i = 0; i < totalStudents; i++) {
                    if (rollNumbers[i] == searchRoll) {
                        std::cout << std::endl << "--- RECORD FOUND ---" << std::endl;
                        std::cout << "Roll No: " << rollNumbers[i] << std::endl;
                        std::cout << "Name: " << studentNames[i] << std::endl;
                        std::cout << "Marks: " << studentMarks[i] << std::endl;
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    std::cout << "Roll Number not found." << std::endl;
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
