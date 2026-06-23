#include <iostream>
#include <string>

struct StudentMark {
    int rollNumber;
    std::string studentName;
    double mathMarks;
    double scienceMarks;
    double englishMarks;
};

int main() {
    const int MAX_STUDENTS = 100;
    StudentMark database[MAX_STUDENTS]; 
    int currentCount = 0;
    int choice;

    while (true) {
        std::cout << "=========================================" << std::endl;
        std::cout << "       MARKSHEET GENERATION SYSTEM       " << std::endl;
        std::cout << "=========================================" << std::endl;
        std::cout << "1. Add New Student Marks" << std::endl;
        std::cout << "2. Display Summary Marksheet Table" << std::endl;
        std::cout << "3. Generate Individual Detailed Report Card" << std::endl;
        std::cout << "4. Exit System" << std::endl;
        std::cout << "=========================================" << std::endl;
        std::cout << "Enter your choice (1-4): ";
        std::cin >> choice;
        std::cout << std::endl;

        if (choice == 1) {
            if (currentCount >= MAX_STUDENTS) {
                std::cout << "Error: Academic database full!" << std::endl << std::endl;
            } else {
                std::cout << "Enter Roll Number: ";
                std::cin >> database[currentCount].rollNumber;
                
                std::cout << "Enter Student Name (No spaces): ";
                std::cin >> database[currentCount].studentName;

                std::cout << "Enter Math Marks (out of 100): ";
                std::cin >> database[currentCount].mathMarks;
                
                std::cout << "Enter Science Marks (out of 100): ";
                std::cin >> database[currentCount].scienceMarks;

                std::cout << "Enter English Marks (out of 100): ";
                std::cin >> database[currentCount].englishMarks;
                
                currentCount++;
                std::cout << "--> Marks registered successfully!" << std::endl << std::endl;
            }
        }

        else if (choice == 2) {
            if (currentCount == 0) {
                std::cout << "No academic records found in the system." << std::endl << std::endl;
            } 
            else {
                std::cout << "-----------------------------------------------------------------------------" << std::endl;
                std::cout << "Roll No\tName\t\tMath\tScience\tEnglish\tTotal\tPercentage" << std::endl;
                std::cout << "-----------------------------------------------------------------------------" << std::endl;
                for (int i = 0; i < currentCount; i++) {
                    double total = database[i].mathMarks + database[i].scienceMarks + database[i].englishMarks;
                    double percentage = (total / 300.0) * 100.0;

                    std::cout << database[i].rollNumber << "\t" 
                              << database[i].studentName << "\t\t" 
                              << database[i].mathMarks << "\t"
                              << database[i].scienceMarks << "\t"
                              << database[i].englishMarks << "\t"
                              << total << "\t"
                              << percentage << "%" << std::endl;
                }
                std::cout << "-----------------------------------------------------------------------------" << std::endl << std::endl;
            }
        }

        else if (choice == 3) {
            if (currentCount == 0) {
                std::cout << "Database empty. Nothing to search." << std::endl << std::endl;
            } 
            else {
                int searchRoll;
                bool found = false;
                std::cout << "Enter Roll Number to generate report card: ";
                std::cin >> searchRoll;

                for (int i = 0; i < currentCount; i++) {
                    if (database[i].rollNumber == searchRoll) {
                        double total = database[i].mathMarks + database[i].scienceMarks + database[i].englishMarks;
                        double percentage = (total / 300.0) * 100.0;
                        char grade;

                        if (percentage >= 90.0) grade = 'A';
                        else if (percentage >= 75.0) grade = 'B';
                        else if (percentage >= 50.0) grade = 'C';
                        else if (percentage >= 35.0) grade = 'D';
                        else grade = 'F';

                        std::cout << std::endl;
                        std::cout << "=========================================" << std::endl;
                        std::cout << "           OFFICIAL REPORT CARD          " << std::endl;
                        std::cout << "=========================================" << std::endl;
                        std::cout << "Roll Number  : " << database[i].rollNumber << std::endl;
                        std::cout << "Student Name : " << database[i].studentName << std::endl;
                        std::cout << "-----------------------------------------" << std::endl;
                        std::cout << "Math Marks   : " << database[i].mathMarks << " / 100" << std::endl;
                        std::cout << "Science Marks: " << database[i].scienceMarks << " / 100" << std::endl;
                        std::cout << "English Marks: " << database[i].englishMarks << " / 100" << std::endl;
                        std::cout << "-----------------------------------------" << std::endl;
                        std::cout << "Total Scored : " << total << " / 300" << std::endl;
                        std::cout << "Percentage   : " << percentage << "%" << std::endl;
                        std::cout << "Final Grade  : " << grade << std::endl;
                        std::cout << "=========================================" << std::endl << std::endl;
                        
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
            std::cout << "Exiting system. Goodbye!" << std::endl;
            break;
        }
        else {
            std::cout << "Invalid selection! Please pick a number from 1 to 4." << std::endl << std::endl;
        }
    }

    return 0;
}
