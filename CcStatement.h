//CcStatement.h

#include "Transaction.h"
#include "Account.h"

class CcStatement: public Transaction {
public:
  CcStatement();
private:
  virtual void DisplayStatement();
}
