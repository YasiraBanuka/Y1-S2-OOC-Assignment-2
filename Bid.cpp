#include "Bid.h"
#include <iostream>
#include <cstring>
using namespace std;

Bid::Bid() {
  bidID = 0;
  bidPrice = 0.0;
  strcpy(bidDate, "");
}
Bid::Bid(int bid_ID, float bid_Price, char bid_Date[]) {
  bidID = bid_ID;
  bidPrice = bid_Price;
  strcpy(bidDate, bid_Date);
} 
void Bid::displayBidDetails() {
  cout << "Bid ID : " << bidID << endl;
  cout << "Bidding Price : " << bidPrice << endl;
  cout << "Bidding Date : " << bidDate << endl;
}
int Bid::getBidID() {}
void Bid::submitAuction() {}