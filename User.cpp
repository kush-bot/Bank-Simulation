#include "../includes/User.h"
#include <cstring>
#include <string>

User::User(const std::string&n ):name(n),account(nullptr){}

User::~User(){}

void User::setAccount(Account* acc){
  account=acc;
}

