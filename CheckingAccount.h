#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H

#include "Account.h"

class CheckingAccount : public Account {
private:
    int daysBetweenPaychecks;

public:
    CheckingAccount(std::string id, double initialBalance, int days);
    void print() const override;
};

#endif
