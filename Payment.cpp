#include "Payment.h"
#include <iostream>
#include <cstring>
using namespace std;

Payment::Payment() {
  paymentID = 0;
  paymentAmount = 0.0;
  strcpy(paymentDate, "");
}
Payment::Payment(int pID, float pAmount, char pDate[]) {
  paymentID = pID;
  paymentAmount = pAmount;
  strcpy(paymentDate, pDate);
}
float Payment::getPayment() {}
void Payment::storePayment(int id, float amount, char *date) {
  paymentID = id;
  paymentAmount = amount;
  strcpy(paymentDate, date);
}
void Payment::displayPaymentDetails() {
  cout << "Payment ID : " << paymentID << endl;
  cout << "Payment Amount : " << paymentAmount << endl;
  cout << "Payment Date : " << paymentDate << endl;
}