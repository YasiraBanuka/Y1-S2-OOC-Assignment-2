#include "Buyer.h"
#include "Item.h"
#include "Bid.h"
#include "Auction.h"
//#include "Payment.h"
#include "CardPayment.h"
#include "BankTransfer.h"
#include "Feedback.h"
#include "Report.h"

#include <iostream>
#include <cstring>
using namespace std;

int main() {
  
//objects of classes created
  Buyer byr(1586, "Ishara Perera", "ishara@gmail.com");
  Item itm(9576, "Laptop", 100000.00);
  Bid bid(24247, 120000.00, "20/05/2022");
  Auction auc(12456, "20/05/2020");
  Feedback fd(21256, "Exellent service!!");
  Report rpt(12378, "Monthly Sales Report");
  Payment pay(144677, 120000.00, "22/05/2022");
  CardPayment crd("Visa", 4216785693867412, "05/24", "Ishara Perera");
  BankTransfer bnk("Sampath Bank", "s56320#124"); 

  byr.displayBuyer();
  cout << "*********************************" << endl;
  itm.displayItemDetails();
  cout << "*********************************" << endl;
  bid.displayBidDetails();
  cout << "*********************************" << endl;
  auc.displayAuction();
  cout << "*********************************" << endl;
  fd.displayFeedback();
  cout << "*********************************" << endl;
  rpt.displayReport();
  cout << "*********************************" << endl;
  pay.displayPaymentDetails(); 
  
  return 0;
}