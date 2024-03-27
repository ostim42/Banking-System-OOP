//transaction.h

class Transaction {
private:
  double date;
  double payments;
  double credits;
  int n;
public:
  Transaction(double d, double pay);
  void Payment();
};
  
