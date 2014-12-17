#ifndef COMPANY_H_
#define COMPANY_H_

#include "HourlyEmployee.h"
#include "Executive.h"
#include <iostream>
#include <vector>
#include <sstream>
#include <fstream>
using namespace std;

class Company {
public:
	Company();
	Company(const char *);
	void manage();
private:
	vector<Employee> employees;
	void hire();
	void fire();
	void print();
};

#endif /* COMPANY_H_ */
