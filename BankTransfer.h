#ifndef BANKTRANSFER_H
#define BANKTRANSFER_H
#include "Payment.h"

class BankTransfer : public Payment {
  protected:
    char bankName[10];
    char referenceNo[10];
  public:
    BankTransfer();
    BankTransfer(char name[], char refNo[]);
};

#endif