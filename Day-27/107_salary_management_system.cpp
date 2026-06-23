#include <iostream>
#include <string>

struct SalaryRecord {
    int employeeId;
    std::string employeeName;
    double baseSalary;
    double allowance;
    double taxDeduction;
};

int main() {
    const int MAX_RECORDS = 100;
    SalaryRecord payroll[MAX_RECORDS]; 
    int currentCount = 0;
    int choice;

    while (true) {
        std::cout << "=========================================" << std::endl;
        std::cout << "         SALARY MANAGEMENT SYSTEM        " << std::endl;
        std::cout << "=========================================" << std::endl;
        std::cout << "1. Add New Salary Record" << std::endl;
        std::cout << "2. Display Payroll Sheets" << std::endl;
        std::cout << "3. Calculate Total Company Expenditure" << std::endl;
        std::cout << "4. Exit System" << std::endl;
        std::cout << "=========================================" << std::endl;
        std::cout << "Enter your choice (1-4): ";
        std::cin >> choice;
        std::cout << std::endl;

        if (choice == 1) {
            if (currentCount >= MAX_RECORDS) {
                std::cout << "Error: Payroll storage full!" << std::endl << std::endl;
            } 
            else {
                std::cout << "Enter Employee ID: ";
                std::cin >> payroll[currentCount].employeeId;
                
                std::cout << "Enter Employee Name (No spaces): ";
                std::cin >> payroll[currentCount].employeeName;

                std::cout << "Enter Base Monthly Salary: $";
                std::cin >> payroll[currentCount].baseSalary;
                
                std::cout << "Enter Allowances/Bonuses: $";
                std::cin >> payroll[currentCount].allowance;

                std::cout << "Enter Tax Deductions: $";
                std::cin >> payroll[currentCount].taxDeduction;
                
                currentCount++;
                std::cout << "--> Salary record processed successfully!" << std::endl << std::endl;
            }
        }

        else if (choice == 2) {
            if (currentCount == 0) {
                std::cout << "No salary records found in the system." << std::endl << std::endl;
            } 
            else {
                std::cout << "-----------------------------------------------------------------------------" << std::endl;
                std::cout << "ID\tName\t\tBase\t\tAllowance\tTax\t\tNet Pay" << std::endl;
                std::cout << "-----------------------------------------------------------------------------" << std::endl;
                for (int i = 0; i < currentCount; i++) {
                    double netPay = payroll[i].baseSalary + payroll[i].allowance - payroll[i].taxDeduction;

                    std::cout << payroll[i].employeeId << "\t" 
                              << payroll[i].employeeName << "\t\t$" 
                              << payroll[i].baseSalary << "\t\t$"
                              << payroll[i].allowance << "\t\t$"
                              << payroll[i].taxDeduction << "\t\t$"
                              << netPay << std::endl;
                }
                std::cout << "-----------------------------------------------------------------------------" << std::endl << std::endl;
            }
        }

        else if (choice == 3) {
            if (currentCount == 0) {
                std::cout << "No active payroll records to compile expenses." << std::endl << std::endl;
            } 
            else {
                double totalBase = 0;
                double totalAllowances = 0;
                double totalDeductions = 0;
                double totalNetPayout = 0;

                for (int i = 0; i < currentCount; i++) {
                    totalBase += payroll[i].baseSalary;
                    totalAllowances += payroll[i].allowance;
                    totalDeductions += payroll[i].taxDeduction;
                    totalNetPayout += (payroll[i].baseSalary + payroll[i].allowance - payroll[i].taxDeduction);
                }

                std::cout << "--- FINANCIAL SUMMARY STATEMENT ---" << std::endl;
                std::cout << "Total Active Employees : " << currentCount << std::endl;
                std::cout << "Total Base Salary Pool : $" << totalBase << std::endl;
                std::cout << "Total Allowances Given : $" << totalAllowances << std::endl;
                std::cout << "Total Taxes Withheld   : $" << totalDeductions << std::endl;
                std::cout << "-----------------------------------" << std::endl;
                std::cout << "NET SYSTEM PAYOUT FLOW : $" << totalNetPayout << std::endl;
                std::cout << "-----------------------------------" << std::endl << std::endl;
            }
        }

        else if (choice == 4) {
            std::cout << "Exiting payroll management system. Goodbye!" << std::endl;
            break;
        }
        else {
            std::cout << "Invalid selection! Please pick a number from 1 to 4." << std::endl << std::endl;
        }
    }

    return 0;
}
