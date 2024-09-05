#ifndef USER_H
#define USER_H
#include<string>
#include "Account.h"


class User{
protected:
    std::string name;
    Account* account;

public:
      User(const std::string& n);
      virtual ~User();

      void setAccount(Account* acc);
      virtual void displayMenu() const =0;
      virtual void performOperations()const =0;
};

#endif

