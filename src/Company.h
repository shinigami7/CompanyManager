#ifndef COMPANY_H_
#define COMPANY_H_

#include "Employee.h"
#include "HourlyEmployee.h"
#include "Executive.h"
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>
using namespace std;

class Company {
public:
	Company();
	Company(const char *);
	~Company();
	void zarzadzaj();
private:
	vector<Employee> pracownicy;
	void zatrudnij();
	void zwolnij();
	void wyswietl();
};

#endif /* COMPANY_H_ */
