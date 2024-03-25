#include <string>
#pragma once

class Account {
protected:
	std::string accountHolder;
	int accountNumber;
	double balance;
	double charges;
public:
	Account(double b, int n, string accountHolder);
	virtual void Deposit(double a);
	virtual void Withdraw(double a);

};
