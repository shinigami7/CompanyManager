#include "HourlyEmployee.h"

HourlyEmployee::HourlyEmployee() {
	hire();
}
HourlyEmployee::HourlyEmployee(string i, string n, double z, unsigned int h, unsigned short int d, unsigned short int m, unsigned int y){
	name = i;
	surname = n;
	per_hour = z;
	hours_per_month = h;
	hire_date.day = d;
	hire_date.month = m;
	hire_date.year = y;
}
void HourlyEmployee::raiseSalary(){
	cout << "\nChanging condition of employment";
	cout << "\nEmployee: " << name << " " << surname;
	cout << "\nHourly income (current: " << per_hour << "): ";
	cin >> per_hour;
	cout << "\nHours per week (current: " <<  hours_per_month << "): ";
	cin >> hours_per_month;

	cout << "\nMonthly income: " << (double)hours_per_month * per_hour << "\n";
}

void HourlyEmployee::printInfo(){
	cout << "\nEmployee info";
	cout << "\n" << name << " " << surname;
	cout << "\nHourly income: " << per_hour;
	cout << "\nHours per week: " << hours_per_month;
	cout << "\nMontly income: " << (double)hours_per_month * per_hour;
}

void HourlyEmployee::hire(){
	cout << "\nHiring new hourly employee, enter data:";
	cout << "\nEnter name: ";
	cin >> name;
	cout << "\nEnter surname: ";
	cin >> surname;
	cout << "\nEnter income of employee per hour: ";
	cin >> per_hour;
	cout << "\nEnter how much hours employee works per week:";
	cin >> hours_per_month;
	cout << "\nEnter hire date";
	cout << "\nDay: ";
	cin >> hire_date.day;
	cout << "\nMonth: ";
	cin >> hire_date.month;
	cout << "\nYear: ";
	cin >> hire_date.year;

}
