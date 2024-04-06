#ifndef USER_H
#define USER_H

#include <string>
#include "Account.h"

class User {
private:
    static const int MaxAccounts = 10;
    std::string name;
    unsigned long accountNumber;
    Account* accounts[MaxAccounts];
    int numAccounts;

public:
    User(const std::string& name, unsigned long accountNumber);
    bool addAccount(Account* account);
    void printAccounts() const;
};

#endif
