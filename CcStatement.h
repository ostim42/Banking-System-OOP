//CcStatement.h

#include "Transaction.h"
#include "Account.h"

class CcStatement: public Transaction, public Account {
public:
  CcStatement();
private:
  virtual void DisplayStatement();
}
