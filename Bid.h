class Bid {
  private:
    int bidID;
    float bidPrice;
    char bidDate[10];
  public:
    Bid();
    Bid(int bid_ID, float bid_Price, char bid_Date[]);
    void displayBidDetails();
    int getBidID();
    void submitAuction();
};