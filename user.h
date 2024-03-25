#ifndef USER_H
#define USER_H

#include <string>
#include <vector>
#include "Account.h"

class User {
private:
    std::string name;
    unsigned long studentNumber;
    std::vector<Account*> accounts;

public:
    User(const std::string& name, unsigned long studentNumber);
    void addAccount(Account* account);
    void printAccounts() const;
};

#endif
