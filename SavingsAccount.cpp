#include "SavingsAccount.h"
SavingsAccount::SavingsAccount() {}
void SavingsAccount::Withdraw(double a) {
	if (charges == 0) {
		balance -= a;
	}
}
