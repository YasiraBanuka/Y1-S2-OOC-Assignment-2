#include "Item.h"
#include <iostream>
using namespace std;
#include <cstring>

Item::Item() {
  itemID = 0;
  strcpy(itemName, "");
  itemPrice = 0.0;
}
Item::Item(int iID, char iName[], float iPrice) {
  itemID = iID;
  strcpy(itemName, iName);
  itemPrice = iPrice;
}
void Item::displayItemDetails() {
  cout << "Item ID : " << itemID << endl;
  cout << "Item Name : " << itemName << endl;
  cout << "Item Price : " << itemPrice << endl;
}