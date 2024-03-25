#ifndef USER_H
#define USER_H

#include <string>
#include "Account.h"

class User {
private:
    static const int MaxAccounts = 10;
    std::string name;
    unsigned long studentNumber;
    Account* accounts[MaxAccounts];
    int numAccounts;

public:
    User(const std::string& name, unsigned long studentNumber);
    bool addAccount(Account* account);
    void printAccounts() const;
};

#endif
