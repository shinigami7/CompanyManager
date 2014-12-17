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
<<<<<<< HEAD
	double per_hour;
	unsigned int hours_per_month;
=======
	double na_godzine;
	unsigned int godzin_w_miesiacu;
>>>>>>> 66ad7b7d9f336b3ad50dd0f125e05f0c6bc267b3
};

#endif /* HOURLYEMPLOYEE_H_ */
