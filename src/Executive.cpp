#include "Executive.h"

Executive::Executive() {
	hire();
}
Executive::Executive(string i, string n, double u, unsigned int s, double z, unsigned short int d, unsigned short int m, unsigned int y){
	name = i;
	surname = n;
	percent_shares = u;
	meetings_per_month = s;
	income_per_meeting = z;
	hire_date.day = d;
	hire_date.month = m;
	hire_date.year = y;
}

void Executive::raiseSalary(){
	cout << "\nChanging condition of employment";
	cout << "\nShares of Company [current " << percent_shares << "%]: ";
	cin >> percent_shares;
	cout << "\nMeetings per month: ";
	cin >> meetings_per_month;
	cout << "\nIncome per meeting: ";
	cin >> income_per_meeting;
}
void Executive::printInfo(){
	cout << "\nExecutive";
	cout << "\n" << name << " " << surname;
	cout << "\nShares in company: " << percent_shares << "%";
	cout << "\nMeetings per month: " << meetings_per_month;
	cout << "\nIncome per meeting: " << income_per_meeting;
}

void Executive::hire(){
	cout << "\nHiring new executive:";
	cout << "\nEnter name: ";
	cin >> name;
	cout << "\nEnter surname: ";
	cin >> surname;
	cout << "\nEnter percent shares in company: ";
	cin >> percent_shares;
	cout << "\nEnter meetings per month: ";
	cin >> meetings_per_month;
	cout << "\nEnter income per meeting: ";
	cin >> income_per_meeting;
	cout << "\nEnter hire date: ";
	cout << "\nDay: ";
	cin >> hire_date.day;
	cout << "\nMonth: ";
	cin >> hire_date.month;
	cout << "\nYear: ";
	cin >> hire_date.year;
}
