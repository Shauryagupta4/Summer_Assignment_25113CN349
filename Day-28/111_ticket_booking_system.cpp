#include <iostream>
#include <string>

int main() {
    int trainNumbers[100];
    std::string passengerNames[100];
    int seatNumbers[100];
    
    int totalTickets = 0;
    int choice;

    while (true) {
        std::cout << std::endl << "=== TICKET BOOKING SYSTEM ===" << std::endl;
        std::cout << "1. Book Ticket" << std::endl;
        std::cout << "2. View All Bookings" << std::endl;
        std::cout << "3. Cancel Ticket" << std::endl;
        std::cout << "4. Exit" << std::endl;
        std::cout << "Enter choice: ";
        std::cin >> choice;

        if (choice == 1) {
            if (totalTickets >= 100) {
                std::cout << "Booking database is full!" << std::endl;
            } 
            else {
                std::cout << "Enter Train Number: ";
                std::cin >> trainNumbers[totalTickets];
                std::cin.ignore();

                std::cout << "Enter Passenger Name: ";
                std::getline(std::cin, passengerNames[totalTickets]);

                std::cout << "Enter Requested Seat Number: ";
                std::cin >> seatNumbers[totalTickets];

                totalTickets++;
                std::cout << "Ticket booked successfully!" << std::endl;
            }
        }
        else if (choice == 2) {
            if (totalTickets == 0) {
                std::cout << "No tickets booked yet." << std::endl;
            } 
            else {
                std::cout << std::endl << "--- CURRENT RESERVATIONS ---" << std::endl;
                for (int i = 0; i < totalTickets; i++) {
                    std::cout << "Passenger: " << passengerNames[i] 
                              << " | Train: " << trainNumbers[i] 
                              << " | Seat: " << seatNumbers[i] << std::endl;
                }
            }
        }
        else if (choice == 3) {
            if (totalTickets == 0) {
                std::cout << "No bookings to cancel." << std::endl;
            } 
            else {
                std::string searchName;
                bool found = false;
                std::cin.ignore();
                
                std::cout << "Enter Passenger Name to cancel: ";
                std::getline(std::cin, searchName);

                for (int i = 0; i < totalTickets; i++) {
                    if (passengerNames[i] == searchName) {
                        for (int j = i; j < totalTickets - 1; j++) {
                            trainNumbers[j] = trainNumbers[j + 1];
                            passengerNames[j] = passengerNames[j + 1];
                            seatNumbers[j] = seatNumbers[j + 1];
                        }
                        totalTickets--;
                        std::cout << "Ticket canceled successfully!" << std::endl;
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    std::cout << "Passenger record not found." << std::endl;
                }
            }
        }
        else if (choice == 4) {
            std::cout << "System closed. Goodbye!" << std::endl;
            break;
        }
        else {
            std::cout << "Invalid option! Try again." << std::endl;
        }
    }

    return 0;
}
