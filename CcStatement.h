//CcStatement.h

#include "Transaction.h"
#include "Account.h"

class CcStatement: public Transaction, public Account {
private: 
string text;
public:
  CcStatement();
  CcStatement(double d, double pay, double creds, int AccNum, double bal, double charge, string a);
  void DisplayStatement(int n);
}
