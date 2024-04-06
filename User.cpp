#include "User.h"
#include <iostream>

User::User(const std::string& name, unsigned long accountNumber)
    : name(name), accountNumber(accountNumber), numAccounts(0) {}

bool User::addAccount(Account* account) {
    if (numAccounts < MaxAccounts) {
        accounts[numAccounts++] = account;
        return true;
    }
    return false;
}

void User::printAccounts() const {
    for (int i = 0; i < numAccounts; i++) {
        accounts[i]->print();
    }
}
