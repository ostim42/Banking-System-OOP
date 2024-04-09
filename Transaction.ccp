//transaction.cpp

#include "Transaction.h"
  


Transaction::Transaction(double d, double pay){
date = d;
payment = pay;
credits = 0;
}
// credits owe initially is 0

Transaction::Payment(){
credits += payment;
}
// Call this function everytime a transaction is recorded, adds up the credits owe.



