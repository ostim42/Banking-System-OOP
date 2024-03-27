//transaction.cpp

#include "Transaction.h"
  


Transaction::Transaction(double d, double pay){
date = d;
payment = pay;
credits = 0;
}

Transaction::Payment(){
credits += payment;
}




