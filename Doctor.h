#include <iostream>
#include <cstring> 

class Doctor : public User {
protected:
	char workAddress[30];
private:
	char Designation[20];
public:
	Doctor();
	void updateVaccineCard();
	void Echannel();

};