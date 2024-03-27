#include "Account.h"
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
