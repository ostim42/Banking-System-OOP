#ifndef USER_H
#define USER_H

#include <string>
#include "Account.h"

class User {
private:
    static const int MAX_ACCOUNTS = 10;
    std::string name;
    unsigned long studentNumber;
    Account* accounts[MAX_ACCOUNTS];
    int numAccounts;

public:
    User(const std::string& name, unsigned long studentNumber);
    bool addAccount(Account* account);
    void printAccounts() const;
};

#endif
