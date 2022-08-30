class Buyer { 
  private:
    int buyerID;
    char buyerName[20];
    char buyerEmail[20];
    char bUsername[15];
    char bPassword[];
  public:
    Buyer();
    Buyer(int bID, char bName[], char bEmail[]);
    void buyerRegister();
    void buyerLogin();
    void editBuyer();
    void displayBuyer();
    void placeBid();
    void viewItem();
    void makePayment();
    void giveFeedback();
};