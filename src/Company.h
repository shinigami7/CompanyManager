#ifndef COMPANY_H_
#define COMPANY_H_

<<<<<<< HEAD
=======
#include "Employee.h"
>>>>>>> 66ad7b7d9f336b3ad50dd0f125e05f0c6bc267b3
#include "HourlyEmployee.h"
#include "Executive.h"
#include <iostream>
#include <vector>
<<<<<<< HEAD
=======
#include <string>
>>>>>>> 66ad7b7d9f336b3ad50dd0f125e05f0c6bc267b3
#include <sstream>
#include <fstream>
using namespace std;

class Company {
public:
	Company();
	Company(const char *);
<<<<<<< HEAD
	void manage();
private:
	vector<Employee> employees;
	void hire();
	void fire();
	void print();
=======
	~Company();
	void zarzadzaj();
private:
	vector<Employee> pracownicy;
	void zatrudnij();
	void zwolnij();
	void wyswietl();
>>>>>>> 66ad7b7d9f336b3ad50dd0f125e05f0c6bc267b3
};

#endif /* COMPANY_H_ */
