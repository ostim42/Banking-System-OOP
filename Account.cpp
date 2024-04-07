#include "Account.h"
#include <iostream>
Account::Account() {};
Account::Account(double b, int n, std::string a) {
	balance = b;
	accountNumber = n;
	accountHolder = a;
	charges = 0;

}
void Account::Deposit(double a) {
	balance += a;
}
void Account::Withdraw(double a) {
	balance -= a;
}
void Account::print() {
	std::cout << "Balance: " << balance << std::endl << "Charges: " << charges << std::endl << "Account Number: "  << accountNumber << std::endl << "Account Holder: " << accountHolder;
}
