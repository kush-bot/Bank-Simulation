#include "../includes/bank.h"
#include <iostream>
#include <ostream>

Bank::Bank():accounts(nullptr),numOfAccounts(0),capacity(0){}

Bank::~Bank(){
  for (int i=0; i<numOfAccounts; i++){
    delete accounts[i];
  }
  delete[] accounts;
}

void Bank::createAccount(long accNum){
  if(numOfAccounts==capacity){
    expandCapacity();
  }
  accounts[numOfAccounts++]=new Account(accNum);

}

void Bank::closeAccount(long accNum){
  for(int i=0; i<numOfAccounts; i++){
    if(accounts[i]->getAccno()==accNum){
      delete accounts[i];
      accounts[i]=accounts[--numOfAccounts];
      return;

    }
  }
  std::cout<<"Account not found"<<std::endl;
}


void Bank::getAllAccountDetails()const{
  for (int  i=0; i<numOfAccounts; i++ ){
      std::cout<<"Account"<<accounts[i]->getAccno()<<": Balance"<<accounts[i]->getBalance()<<std::endl;
  }
}


void Bank::expandCapacity(){
  int newCapacity=capacity==0?1:capacity*2;
  Account** newAccounts = new Account*[newCapacity];
  for(int i=0; i<numOfAccounts; i++){
    newAccounts[i]=accounts[i];
  }
  delete[] accounts;
  accounts=newAccounts;
  capacity=newCapacity;
}


