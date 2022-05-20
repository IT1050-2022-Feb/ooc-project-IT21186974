#include <iostream>
#include <cstring>
#include "User.h"
#include "Customer.h"
#include "Reservation.h"
#include "Vaccine.h"
#include "Administrator.h"
using namespace std;


//Main program
//User, Customer, Vaccine and Reservation classes have implemented methods in relevant  cpp and h files and few of objects are declared here. 


int main()
{  
  //dynamic object creation
 
   User *c1[3];
   c1[0]= new User();
   c1[1]->verify_login();
   
  Customer *cus[4];
   cus[0] = new Customer();
   cus[2]= new Customer("cm001","1e2qwda","gadaca,as","3234",20,077);
   cus[1]->ChannelDoc();
   cus[1]->eChannelPayment();
   
   Vaccine *vac;
   vac=new Vaccine();

   Reservation *r;
   r->Add_ReservationDetails(cus[2],vac,22,"cm");


  return 0;
}
