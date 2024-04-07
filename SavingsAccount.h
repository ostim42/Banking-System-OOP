#pragma once
#include "Account.h"
class SavingsAccount : public Account {
public:
	SavingsAccount();
	void Withdraw(double a) override;
};
