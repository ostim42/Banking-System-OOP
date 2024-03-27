//transaction.h

class Transaction {
private:
  double amount;
  double balance;
  double date;
  double withdrawls;
  double deposits;
  double payments;
  double credits;
public:
  Transaction(double amt, double pay);
  void Withdraw();
  void Deposit();
  void Payment()
  void CcStatement();
};
  
