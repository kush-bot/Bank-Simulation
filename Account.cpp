#include "../includes/Account.h"
#include <algorithm>
#include <iostream>
#include <cmath>
#include <ostream>

Account::Account(long accNum):accountNumber(accNum),balance(0),statement(nullptr),statementSize(0){}

Account::~Account(){
  delete[] statement;
}

void Account::deposite(double amount){
  balance+=amount;
}

void Account::withdraw(double amount){
  if(balance>=amount){
    balance-=amount;
    addStatement(-amount);
  }else{
    std::cout<<"Insufficient funds"<<std::endl;
  }
}

double Account::getBalance() const{
  return balance;
}

void Account::addStatement(double amount){
  double* newStatement = new double[statementSize+1];
  for(int i=0; i<statementSize; i++){
    newStatement[i]=statement[i];
  }

  newStatement[statementSize]=amount;
  delete[] statement;
  statement = newStatement;
  ++statementSize;
}

long Account::getAccno()const{
  return accountNumber;
}


void Account::printMiniStatement()const{
  std::cout<<"Mini Statement for Account :"<<accountNumber<<" : "<<std::endl;
  for(int i=0; i<statementSize; i++){
    std::cout<<(statement[i]>= 0 ?"Deposite ": "Withdraw")<<std::abs(statement[i])<<std::endl;
  }
}
