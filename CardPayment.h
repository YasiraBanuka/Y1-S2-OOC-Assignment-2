#ifndef CARDPAYMENT_H
#define CARDPAYMENT_H
#include "Payment.h"

class CardPayment : public Payment {
  protected:
    char cardType[8];
    long cardNo;
    char cardExpDate[10];
    char nameOnCard[20];
  public:
    CardPayment();
    CardPayment(char cType[], long cNo, char expDate[], char nameCard[]);
    void displayCardDetails();
};

#endif