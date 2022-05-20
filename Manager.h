#include <iostream>
#include "User.h"
#include "Reservation.h"

using namespace std;

class Manager : public User{
  private:
    Reservation *reserve;

  public:
    void updateVaccineCard();
    void updateReservation(Reservation *res);
    
};
