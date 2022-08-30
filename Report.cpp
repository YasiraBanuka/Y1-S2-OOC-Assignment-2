#include "Report.h"
#include <iostream>
using namespace std;
#include <cstring>

Report::Report() {
  reportID = 0;
  strcpy(reportName, "");
}
Report::Report(int rID, char rName[]) {
  reportID = rID;
  strcpy(reportName, rName);
}
void Report::displayReport() {
  cout << "Report ID : " << reportID << endl;
  cout << "Report Name : " << reportName << endl;
}
void Report::generatePaymentReport() {}
void Report::generateFeedbackReport() {}
void Report::generateBidReport() {}