#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <cmath>
class Account{
private:
    long accountNumber;
    double balance;
    double *statement;
    int statementSize;  
    void addStatement(double amount);

public:
    Account(long accNum);
    ~Account();

    void deposite(double amount);
    void withdraw(double amount);
    double getBalance() const;
    long getAccno()const;
    void printMiniStatement()const;


};

#endif // !ACCOUNT_H

