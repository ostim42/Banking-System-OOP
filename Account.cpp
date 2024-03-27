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
void Account::print(double b, double c, std::string a, int n) {
	std::cout << "Balance: " << b << std::endl << "Charges: " << c << std::endl << "Account Number: "  << n << std::endl << "Account Holder: " << a;
