#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "User.h"
#include <string>

class Customer:public User{
private:
    long accountNumber;
public:
    Customer(const std::string& n,long accNum);
    std::string getName()const;
    long getAccountNumber()const;
    void displayMenu()const override;
    void performOperations()const override;

};
#endif 
