#include <iostream>
#include <string>

const int MAX_STUDENTS = 100;

void showMenu() {
    std::cout << std::endl << "=== STUDENT GRADING SYSTEM ===" << std::endl;
    std::cout << "1. Add Student Record" << std::endl;
    std::cout << "2. View All Student Records" << std::endl;
    std::cout << "3. Calculate Class Average" << std::endl;
    std::cout << "4. Find Highest & Lowest Scorer" << std::endl;
    std::cout << "5. Exit" << std::endl;
    std::cout << "Enter choice: ";
}

char calculateGrade(double marks) {
    if (marks >= 90) return 'A';
    if (marks >= 80) return 'B';
    if (marks >= 70) return 'C';
    if (marks >= 60) return 'D';
    return 'F';
}

void addStudent(int ids[], std::string names[], double marks[], int& total) {
    if (total >= MAX_STUDENTS) {
        std::cout << "Database full! Cannot add more records." << std::endl;
        return;
    }

    std::cout << "Enter Student ID (number): ";
    std::cin >> ids[total];
    std::cin.ignore();

    std::cout << "Enter Student Name: ";
    std::getline(std::cin, names[total]);

    std::cout << "Enter Student Marks (0-100): ";
    std::cin >> marks[total];

    total++;
    std::cout << "Student record added successfully!" << std::endl;
}

void displayRecords(const int ids[], const std::string names[], const double marks[], int total) {
    if (total == 0) {
        std::cout << "No student records found." << std::endl;
        return;
    }

    std::cout << std::endl << "--- STUDENT REPORT CARD ---" << std::endl;
    for (int i = 0; i < total; i++) {
        std::cout << "ID: " << ids[i] 
                  << " | Name: " << names[i] 
                  << " | Marks: " << marks[i] 
                  << " | Grade: " << calculateGrade(marks[i]) << std::endl;
    }
}

void displayAverage(const double marks[], int total) {
    if (total == 0) {
        std::cout << "No data available to calculate average." << std::endl;
        return;
    }

    double sum = 0;
    for (int i = 0; i < total; i++) {
        sum += marks[i];
    }
    std::cout << "Total Class Performance Average: " << sum / total << std::endl;
}

void findExtremes(const std::string names[], const double marks[], int total) {
    if (total == 0) {
        std::cout << "No records found to perform extreme analytics." << std::endl;
        return;
    }

    int highestIndex = 0;
    int lowestIndex = 0;

    for (int i = 1; i < total; i++) {
        if (marks[i] > marks[highestIndex]) {
            highestIndex = i;
        }
        if (marks[i] < marks[lowestIndex]) {
            lowestIndex = i;
        }
    }

    std::cout << "Highest Scorer: " << names[highestIndex] << " (" << marks[highestIndex] << ")" << std::endl;
    std::cout << "Lowest Scorer: " << names[lowestIndex] << " (" << marks[lowestIndex] << ")" << std::endl;
}

int main() {
    int studentIds[MAX_STUDENTS];
    std::string studentNames[MAX_STUDENTS];
    double studentMarks[MAX_STUDENTS];
    
    int totalStudents = 0;
    int choice;

    while (true) {
        showMenu();
        std::cin >> choice;

        if (choice == 1) {
            addStudent(studentIds, studentNames, studentMarks, totalStudents);
        }
        else if (choice == 2) {
            displayRecords(studentIds, studentNames, studentMarks, totalStudents);
        }
        else if (choice == 3) {
            displayAverage(studentMarks, totalStudents);
        }
        else if (choice == 4) {
            findExtremes(studentNames, studentMarks, totalStudents);
        }
        else if (choice == 5) {
            std::cout << "Closing mini project. Goodbye!" << std::endl;
            break;
        }
        else {
            std::cout << "Invalid option! Try again." << std::endl;
        }
    }

    return 0;
}
