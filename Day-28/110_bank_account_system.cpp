#include <iostream>
#include <string>

int main() {
    // Arrays to store account details (maximum 100 accounts)
    int accountNumbers[100];
    std::string accountNames[100];
    double accountBalances[100];
    
    int totalAccounts = 0;
    int choice;

    while (true) {
        std::cout << std::endl << "=== BANK SYSTEM ===" << std::endl;
        std::cout << "1. Create Account" << std::endl;
        std::cout << "2. Deposit Money" << std::endl;
        std::cout << "3. Withdraw Money" << std::endl;
        std::cout << "4. Check Balance" << std::endl;
        std::cout << "5. Exit" << std::endl;
        std::cout << "Enter choice: ";
        std::cin >> choice;

        if (choice == 1) {
            if (totalAccounts >= 100) {
                std::cout << "Bank database is full!" << std::endl;
            } 
            else {
                std::cout << "Enter New Account Number: ";
                std::cin >> accountNumbers[totalAccounts];
                std::cin.ignore(); 

                std::cout << "Enter Account Holder Name: ";
                std::getline(std::cin, accountNames[totalAccounts]);

                std::cout << "Enter Initial Deposit Amount: ";
                std::cin >> accountBalances[totalAccounts];

                totalAccounts++; 
                std::cout << "Account created successfully!" << std::endl;
            }
        }
        else if (choice == 2) {
            if (totalAccounts == 0) {
                std::cout << "No accounts exist in the system." << std::endl;
            } 
            else {
                int searchAcc;
                double depositAmount;
                bool found = false;
                
                std::cout << "Enter Account Number: ";
                std::cin >> searchAcc;

                for (int i = 0; i < totalAccounts; i++) {
                    if (accountNumbers[i] == searchAcc) {
                        std::cout << "Enter amount to deposit: ";
                        std::cin >> depositAmount;
                        
                        if (depositAmount > 0) {
                            accountBalances[i] = accountBalances[i] + depositAmount;
                            std::cout << "Deposited successfully! New Balance: $" << accountBalances[i] << std::endl;
                        } 
                        else {
                            std::cout << "Invalid deposit amount." << std::endl;
                        }
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    std::cout << "Account number not found." << std::endl;
                }
            }
        }
        else if (choice == 3) {
            if (totalAccounts == 0) {
                std::cout << "No accounts exist in the system." << std::endl;
            } 
            else {
                int searchAcc;
                double withdrawAmount;
                bool found = false;

                std::cout << "Enter Account Number: ";
                std::cin >> searchAcc;

                for (int i = 0; i < totalAccounts; i++) {
                    if (accountNumbers[i] == searchAcc) {
                        std::cout << "Enter amount to withdraw: ";
                        std::cin >> withdrawAmount;

                        if (withdrawAmount > accountBalances[i]) {
                            std::cout << "Insufficient balance! Current Balance: $" << accountBalances[i] << std::endl;
                        } 
                        else if (withdrawAmount <= 0) {
                            std::cout << "Invalid withdrawal amount." << std::endl;
                        } 
                        else {
                            accountBalances[i] = accountBalances[i] - withdrawAmount;
                            std::cout << "Withdrawn successfully! Remaining Balance: $" << accountBalances[i] << std::endl;
                        }
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    std::cout << "Account number not found." << std::endl;
                }
            }
        }
        else if (choice == 4) {
            if (totalAccounts == 0) {
                std::cout << "No accounts exist in the system." << std::endl;
            } 
            else {
                int searchAcc;
                bool found = false;
                std::cout << "Enter Account Number: ";
                std::cin >> searchAcc;

                for (int i = 0; i < totalAccounts; i++) {
                    if (accountNumbers[i] == searchAcc) {
                        std::cout << std::endl << "--- ACCOUNT DETAILS ---" << std::endl;
                        std::cout << "Account Number: " << accountNumbers[i] << std::endl;
                        std::cout << "Holder Name: " << accountNames[i] << std::endl;
                        std::cout << "Current Balance: $" << accountBalances[i] << std::endl;
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    std::cout << "Account number not found." << std::endl;
                }
            }
        }
        else if (choice == 5) {
            std::cout << "Thank you for using the banking system. Goodbye!" << std::endl;
            break;
        }
        else {
            std::cout << "Invalid option! Try again." << std::endl;
        }
    }

    return 0;
}
