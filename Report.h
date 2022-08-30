class Report {
  private:
    int reportID;
    char reportName[30];
  public:
    Report();
    Report(int rID, char rName[]);
    void displayReport();
    void generatePaymentReport();
    void generateFeedbackReport();
    void generateBidReport();
};