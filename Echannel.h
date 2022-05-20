#include "Payment.h"


class Echannel {
private:
	int number;
	char dateAndTime[40];
	int doctorId;
	int userId;
	Payment* p1;
public:
	Echannel();
	Echannel(int tnumber, char tchardateAndTime[], int tdoctorId, int tuserId);
	~Echannel();
};
