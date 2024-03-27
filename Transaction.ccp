//transaction.cpp

#include "Transaction.h"

class Transaction {
public:
  double amount;
  double balance;
  double date;
  double withdrawls;
  double deposits;
  double payments;
  double credits;
  void Withdraw();
  void Deposit();
  void Payment()
  void CcStatement();
};
  
Transaction::Transaction(double amt, double pay){
amount = amt;
balance = 0;
date = 20240326;
withdrawls = 0;
deposits = 0;
payment = pay;
credits = 0;
}

Transaction::Withdraw(){
balance -= amount;
withdrawls += amount;
}

Transaction::Deposit(){
balance += amount;
deposits += amount;
}

Transaction::Payment(){
credits += payment;
}

Transaction::CcStatement(){
cout << " " <<deposits<< endl;
cout << "-" <<withdrawls <<endl;
cout << "Balance:  " <<balance <<endl <<endl;

cout <<"Credit Card: -" <<credits <<endl;

if(balance>credits){
balance -= credits
credits = 0;
cout << "New balance: " <<balance <<endl;
}

}



