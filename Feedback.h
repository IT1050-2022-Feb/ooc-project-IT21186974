#include <iostream>
#include "Customer.h"

using namespace std;

class Feedback
{
private:
       int feedbackId;
       int date;
       char email[20];
       char massage[500];
public:
      Feedback(int fbId,int dte,char mail[]);
      void displayFeedback(char msg[]);
      ~Feedback();
};
  
