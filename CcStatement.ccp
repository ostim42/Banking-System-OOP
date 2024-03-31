#include "CcStatement.h"

CcStatement::CcStatement() {
text = " ";
}

CcStatement::CcStatement(double d, double pay, double creds, int AccNum, double bal, double charge, string a):Transaction(d, pay, creds),Account(AccNum, bal, charge, a){
}

DisplayStatement(int n){
n = balance - credits;
text = "Date: " + to_string(date) + endl + "Transactions total: " + to_string(payment) + endl + "Credits due: " + endl + to_string(credits) + endl + endl + "Old balance: " + to_string(balance) + endl + "Balance after payment: " + to_string(n);

cout << text <<endl;

}
