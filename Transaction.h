//transaction.h

class Transaction: public Account {
private:
  double date[100];
  double payments[100];
  double credits;
  int n;
public:
  Transaction(double date, double pay);
  void Payment()
  void CcStatement();
};
  
