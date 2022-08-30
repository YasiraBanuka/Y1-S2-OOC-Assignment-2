#include "BankTransfer.h"
#include <cstring>

BankTransfer::BankTransfer() {
  strcpy(bankName, "");
  strcpy(referenceNo, "");
}
BankTransfer::BankTransfer(char name[], char refNo[]) {
  strcpy(bankName, name);
  strcpy(referenceNo, refNo);
}