#include <iostream>

void showMenu();
void checkBalance(double balance);
double depositMoney(double balance);
double withdrawMoney(double balance);

int main() {
    const int CORRECT_PIN = 1234;
    int enteredPin;
    int loginAttempts = 0;
    double accountBalance = 1000.0;
    int menuChoice;
    bool isRunning = true;

    std::cout<< "=== WELCOME TO THE BASIC ATM SYSTEM ==="<<std::endl;

    while (loginAttempts < 3) 
    {
        std::cout<< "Enter your 4-digit PIN: "<<std::endl;
        std::cin>>enteredPin;

        if (enteredPin == CORRECT_PIN) 
        {
            std::cout<< "\nAccess Granted!\n"<<std::endl;
            break;
        } 
        else 
        {
            loginAttempts++;
            std::cout<< "Incorrect PIN. Attempts remaining: " << (3 - loginAttempts) <<std::endl;
        }
    }

    if (loginAttempts == 3) 
    {
        std::cout<< "Too many incorrect attempts. Your card has been blocked.\n";
        return 0;
    }

    while (isRunning) 
    {
        showMenu();
        std::cout<< "Choose an option (1-4): ";
        std::cin>> menuChoice;

        switch (menuChoice) {
            case 1:
                checkBalance(accountBalance);
                break;
            case 2:
                accountBalance = depositMoney(accountBalance);
                break;
            case 3:
                accountBalance = withdrawMoney(accountBalance);
                break;
            case 4:
                std::cout<<std::endl<<"Thank you for using our ATM. Goodbye!"<<std::endl;
                isRunning = false;
                break;
            default:
                std::cout<<std::endl<<"Invalid choice. Please select a number between 1 and 4."<<std::endl;
        }
    }

    return 0;
}

void showMenu() 
{
    std::cout<<std::endl<<"---------- ATM MENU ----------"<<std::endl;
    std::cout<< "1. Check Balance"<<std::endl;
    std::cout<< "2. Deposit Money"<<std::endl;
    std::cout<< "3. Withdraw Money"<<std::endl;
    std::cout<< "4. Exit System"<<std::endl;
    std::cout<< "------------------------------"<<std::endl;
}

void checkBalance(double balance) 
{
    std::cout<<std::endl<<"Your current balance is: $" << balance <<std::endl;
}

double depositMoney(double balance) 
{
    double depositAmount;
    std::cout<<std::endl<<"Enter amount to deposit: $";
    std::cin>> depositAmount;

    if (depositAmount > 0) 
    {
        balance += depositAmount;
        std::cout<< "$" << depositAmount << " successfully deposited."<<std::endl;
    } 
    else
    {
        std::cout<< "Invalid deposit amount."<<std::endl;
    }
    return balance;
}

double withdrawMoney(double balance) 
{
    double withdrawalAmount;
    std::cout<<std::endl<<"Enter amount to withdraw: $";
    std::cin>> withdrawalAmount;

    if (withdrawalAmount > balance) 
    {
        std::cout<<"Transaction Failed: Insufficient funds."<<std::endl;
    } 
    else if (withdrawalAmount <= 0) 
    {
        std::cout<< "Transaction Failed: Invalid withdrawal amount."<<std::endl;
    } 
    else 
    {
        balance -= withdrawalAmount;
        std::cout<< "$" << withdrawalAmount << " successfully withdrawn."<<std::endl;
    }
    return balance;
}
