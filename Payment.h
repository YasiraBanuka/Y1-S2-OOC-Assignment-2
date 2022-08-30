#ifndef PAYMENT_H
#define PAYMENT_H

class Payment {
  protected:
    int paymentID;
    float paymentAmount;
    char paymentDate[10];
  public:
    Payment();
    Payment(int pID, float pAmount, char pDate[]);
    float getPayment();
    void storePayment(int id, float amount, char *date);
    void displayPaymentDetails();
};

#endif