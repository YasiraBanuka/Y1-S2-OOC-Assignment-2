#include "Auction.h"
#include <iostream>
#include <cstring>
using namespace std;

Auction::Auction() {
  aucID = 0;
  strcpy(aucDate, "");
}
Auction::Auction(int aID, char aDate[]) {
  aucID = aID;
  strcpy(aucDate, aDate);
}
void Auction::displayAuction() {
  cout << "Auction ID : " << aucID << endl;
  cout << "Auction Date : " << aucDate << endl;
}
void Auction::selectBid() {}