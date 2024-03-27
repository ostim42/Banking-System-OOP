#include <string>
#pragma once

class Account {
protected:
	std::string accountHolder;
	int accountNumber;
	double balance;
	double charges;
public:
	Account();
	Account(double b, int n, std::string a);
	virtual void Deposit(double a);
	virtual void Withdraw(double a);
	virtual void print(double b, double c, std::string a, int n);

};
