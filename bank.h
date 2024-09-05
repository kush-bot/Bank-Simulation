#ifndef  BANK_H
#define  BANK_H

#include "Account.h"

class Bank{
private:
    Account** accounts;
    int numOfAccounts;
    int capacity;

    void expandCapacity();

public:
  Bank();
  ~Bank();

  void createAccount(long accNum);
  void closeAccount(long accNum);
  void getAllAccountDetails()const;
  Account** getAccounts(){
    return accounts;
  }
};





#endif







