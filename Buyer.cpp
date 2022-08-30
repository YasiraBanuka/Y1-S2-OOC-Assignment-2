#include "Buyer.h"
#include <iostream>
using namespace std;
#include <cstring>

Buyer::Buyer() {
  buyerID = 0;
  strcpy(buyerName, "");
  strcpy(buyerEmail, "");
  strcpy(bUsername, "");
  strcpy(bPassword, "");
}
Buyer::Buyer(int bID, char bName[], char bEmail[]) {
  buyerID = bID;
  strcpy(buyerName, bName);
  strcpy(buyerEmail, bEmail);
}
void Buyer::buyerRegister() {}
void Buyer::buyerLogin() {}
void Buyer::editBuyer() {}
void Buyer::displayBuyer() {
  cout << "Buyer ID : " << buyerID << endl;
  cout << "Buyer Name : " << buyerName << endl;
  cout << "Buyer Email : " << buyerEmail << endl;
}
void Buyer::placeBid() {}
void Buyer::viewItem() {}
void Buyer::makePayment() {}
void Buyer::giveFeedback() {}