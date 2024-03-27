//transaction.cpp

#include "Transaction.h"
  


Transaction::Transaction(double d, double pay){
date = d;
payment = pay;
credits = 0;
}

Transaction::Payment(){
credits += payment[n];
n++
}

Transaction::CcStatement(){
for (int i, i<n, i++){
cout <<date[n] << "     $" <<payment[n] <<endl;
}
cout <<endl;
cout <<"Total Payment Due: -" <<credits <<endl;

cout << "Old Balance: " <<balance;
if(balance>credits){
balance -= credits
credits = 0;
cout << "New balance: " <<balance <<endl;
}

}



