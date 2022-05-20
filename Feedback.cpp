#include <iostream>    
#include "Feedback.h"

using namespace std;


Feedback::Feedback(int fbId,int dte,char mail[])
{
      feedbackId=fbId;
      strcpy(email,mail);  
      date = dte;
  }
void Feedback::displayFeedback(char msg[])
{
  strcpy(massage,msg);
  cout<<"Here you see the displayFeedback function" <<endl;
}
Feedback::~Feedback()
{
}