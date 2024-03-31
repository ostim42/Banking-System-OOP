//CcStatement.h

#include "Transaction.h"
#include "Account.h"

class CcStatement: public Transaction, public Account {
public:
  CcStatement();
  CcStatement(double d, double pay, double creds, 
  virtual void DisplayStatement();
}
