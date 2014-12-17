#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
	virtual ~Employee(){};
	virtual void raiseSalary(){};
	virtual void printInfo(){};
	virtual void tableInfo();
protected:
	virtual void hire(){};

	string name;
	string surname;
	struct hireDate {
		unsigned short int day;
		unsigned short int month;
		unsigned int year;
	} hire_date;
};

#endif /* EMPLOYEE_H_ */
