#include "CheckingAccount.h"
#include <iostream>

CheckingAccount::CheckingAccount(std::string id, double initialBalance, int days)
    : Account(id, initialBalance), daysBetweenPaychecks(days) {}

void CheckingAccount::print() const {
    Account::print();
    std::cout << "Days Between Paychecks: " << daysBetweenPaychecks << std::endl;
}
// Reminding user when the next paycheck is coming
