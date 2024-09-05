#include "../includes/Admin.h"
#include <iostream>
#include <string>

Admin::Admin(const std::string& n,const std::string& pwd,Bank* b):User(n),password(pwd),bank(b){}


void Admin::displayMenu() const{
      std::cout << "1. Create Account\n2. Close Account\n3. View All Accounts\n4. Exit" << std::endl;
}

void Admin::performOperations()const{
int choice;
    long accNum;
    do {
        displayMenu();
        std::cin >> choice;
        switch (choice) {
            case 1:
                std::cout << "Enter account number: ";
                std::cin >> accNum;
                bank->createAccount(accNum);
                break;
            case 2:
                std::cout << "Enter account number to close: ";
                std::cin >> accNum;
                bank->closeAccount(accNum);
                break;
            case 3:
                bank->getAllAccountDetails();
                break;
            case 4:
                std::cout << "Exiting..." << std::endl;
                break;
            default:
                std::cout << "Invalid choice" << std::endl;
        }
    } while (choice != 4);
}


