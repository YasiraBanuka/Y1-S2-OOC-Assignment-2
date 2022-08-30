#include "CardPayment.h"
#include <iostream>
#include <cstring>
using namespace std;

CardPayment::CardPayment() {
  strcpy(cardType, "");
  cardNo = 0;
  strcpy(cardExpDate, "");
  strcpy(nameOnCard, "");
}
CardPayment::CardPayment(char cType[], long cNo, char expDate[], char nameCard[]) {
  strcpy(cardType, cType);
  cardNo = cNo;
  strcpy(cardExpDate, expDate);
  strcpy(nameOnCard, nameCard);
}
void CardPayment::displayCardDetails() {
  cout << "Card Type : " << cardType << endl;
}