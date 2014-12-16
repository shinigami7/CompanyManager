#ifndef HOURLYEMPLOYEE_H_
#define HOURLYEMPLOYEE_H_

#include "Employee.h"
#include <iostream>
using namespace std;

class HourlyEmployee: public Employee {
public:
	HourlyEmployee();
	HourlyEmployee(string, string, double, unsigned int, unsigned short int, unsigned short int, unsigned int);
	void raiseSalary() override;
	void printInfo() override;
private:
	void hire() override;
	double na_godzine;
	unsigned int godzin_w_miesiacu;
};

#endif /* HOURLYEMPLOYEE_H_ */
