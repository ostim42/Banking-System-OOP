//transaction.h
#pragma once

class Transaction {
private:
  double date;
  double payments;
  double credits;
public:
  Transaction(double d, double pay);
  void Payment();
};
  
