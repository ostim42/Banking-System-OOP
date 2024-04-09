#include "CcStatement.h"

CcStatement::CcStatement() {
text = " ";
}

CcStatement::CcStatement(double d, double pay, double creds, int AccNum, double bal, double charge, string a):Transaction(d, pay, creds),Account(AccNum, bal, charge, a){
}

DisplayStatement(int n){
n = balance - credits;

if (n>0){
text = "Date: " + to_string(date) + endl + "Credits due: " + endl + to_string(credits) + endl + endl + "Old balance: " + to_string(balance) + endl + "Balance after payment: " + to_string(n);}
// if there is enough balance to pay off credit card
else{
text = "Date: " + to_string(date) + endl + "Credits due: " + endl + to_string(credits) + endl + endl + "Account balance: " + to_string(balance) + endl + "Balance insufficient for credit card payment."
}
// If there is insufficient balance
cout << text <<endl;

}
