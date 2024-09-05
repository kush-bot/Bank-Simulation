#include "../includes/Customer.h"
#include <algorithm>
#include <future>
#include <iostream>
#include <ostream>
#include <string>

Customer::Customer(const std::string& n,long accNum):User(n),accountNumber(accNum){}

std::string Customer::getName() const{
      return name; 
}

long Customer::getAccountNumber()const{
  return accountNumber;
}

void Customer::displayMenu()const{
  std::cout<<"1.Check Balance\n2.Deposite\n3.Withdraw\n4.mini Statement\n5.Exit"<<std::endl;
}

void Customer::performOperations()const{
  int choice;
  double amount;
  do{
    displayMenu();
    std::cin>>choice;
    switch (choice) {
      case 1:
        std::cout<<"Balance :"<<account->getBalance()<<std::endl;
        break;
      case 2:
        std::cout<<"Enter amount to Deposite: ";
        std::cin>>amount;
        account->deposite(amount);
        break;
      case 3:
        std::cout<<"Enter amount to Withdraw :";
        std::cin>>amount;
        account->withdraw(amount);
        break;
      case 4:
        account->printMiniStatement();
        break;
      case 5:
        std::cout<<"Exiting"<<std::endl;
        break;

      default:
        std::cout<<"Invalid choice"<<std::endl;
        
      
    }
  }while (choice!=5);
    
  
}
