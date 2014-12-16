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
	double procent_udzialow;
	unsigned int spotkan_miesiecznie;
	double zarobki_za_spotkanie;
};

#endif /* EXECUTIVE_H_ */
