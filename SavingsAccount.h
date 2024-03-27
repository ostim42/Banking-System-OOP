#pragma once
#include "Account.h"
class SavingsAccount : public Account {

	SavingsAccount();
	void Withdraw(double a) override;
};
