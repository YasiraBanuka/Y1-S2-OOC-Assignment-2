class Auction {
  private:
    int aucID;
    char aucDate[10];
  public:
    Auction();
    Auction(int aID, char aDate[]);
    void displayAuction();
    void selectBid();
};