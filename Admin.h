#ifndef ADMIN_H
#define ADMIN_H

#include "User.h"
#include "bank.h"

class Admin : public User {
private:
    std::string password;
    Bank *bank;

public:
    Admin(const std::string& n, const std::string& pwd, Bank* b);

    void displayMenu() const override;
    void performOperations()const override;
};

#endif 
