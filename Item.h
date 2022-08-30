class Item { 
  private:
    int itemID;
    char itemName[10];
    float itemPrice;
  public:
    Item();
    Item(int iID, char iName[], float iPrice);
    void displayItemDetails();
};