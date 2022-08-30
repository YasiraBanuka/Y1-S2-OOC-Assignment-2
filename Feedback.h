class Feedback {
  private:
    int feedbackID;
    char description[30];
  public:
    Feedback();  
    Feedback(int fID, char fDescription[]);
    int getFeedback();
    void displayFeedback();
};