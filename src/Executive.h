#ifndef EXECUTIVE_H_
#define EXECUTIVE_H_

#include "Employee.h"
#include <iostream>
using namespace std;

class Executive: public Employee {
public:
	Executive();
	Executive(string, string, double, unsigned int, double, unsigned short int, unsigned short int, unsigned int);
	void raiseSalary() override;
	void printInfo() override;
private:
	void hire() override;
<<<<<<< HEAD
	double percent_shares;
	unsigned int meetings_per_month;
	double income_per_meeting;
=======
	double procent_udzialow;
	unsigned int spotkan_miesiecznie;
	double zarobki_za_spotkanie;
>>>>>>> 66ad7b7d9f336b3ad50dd0f125e05f0c6bc267b3
};

#endif /* EXECUTIVE_H_ */
