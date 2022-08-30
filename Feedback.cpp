#include "Feedback.h"
#include <iostream>
using namespace std;
#include <cstring>

Feedback::Feedback(){
  feedbackID = 0;
  strcpy(description, "");
}
Feedback::Feedback(int fID, char fDescription[]) {
  feedbackID = fID;
  strcpy(description, fDescription);
}
int Feedback::getFeedback() {}
void Feedback::displayFeedback() {
  cout << "Feedback ID : " << feedbackID << endl;
  cout << "Feedback Description : " << description << endl;
}