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
	double percent_shares;
	unsigned int meetings_per_month;
	double income_per_meeting;
};

#endif /* EXECUTIVE_H_ */
