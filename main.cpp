#include "../includes/bank.h"
#include "../includes/Admin.h"
#include "../includes/Customer.h"
#include <iostream>

int main() {
    Bank bank;
    Admin admin("AdminUser", "admin123", &bank);
    Customer customer("John Doe", 1001);

    bank.createAccount(1001);
    customer.setAccount(bank.getAccounts()[0]);

    std::cout << "Admin Operations:" << std::endl;
    admin.performOperations();

    std::cout << "\nCustomer Operations:" << std::endl;
    customer.performOperations();

    return 0;
}
