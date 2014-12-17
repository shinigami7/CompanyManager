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

<<<<<<< HEAD
	string name;
	string surname;
=======
	string imie;
	string nazwisko;
>>>>>>> 66ad7b7d9f336b3ad50dd0f125e05f0c6bc267b3
	struct hireDate {
		unsigned short int day;
		unsigned short int month;
		unsigned int year;
<<<<<<< HEAD
	} hire_date;
=======
	} data_zatrudnienia;
>>>>>>> 66ad7b7d9f336b3ad50dd0f125e05f0c6bc267b3
};

#endif /* EMPLOYEE_H_ */
