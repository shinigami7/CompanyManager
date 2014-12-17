#include "HourlyEmployee.h"

HourlyEmployee::HourlyEmployee() {
	hire();
}
HourlyEmployee::HourlyEmployee(string i, string n, double z, unsigned int h, unsigned short int d, unsigned short int m, unsigned int y){
<<<<<<< HEAD
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
=======
	imie = i;
	nazwisko = n;
	na_godzine = z;
	godzin_w_miesiacu = h;
	data_zatrudnienia.day = d;
	data_zatrudnienia.month = m;
	data_zatrudnienia.year = y;
}
void HourlyEmployee::raiseSalary(){
	cout << "\nZmiana warunkow zatrudnienia na godziny";
	cout << "Pracownik:" << imie << " " << nazwisko;
	cout << "\nZarobki na godzine (aktualnie: " << na_godzine << "): ";
	cin >> na_godzine;
	cout << "\nIlosc godzin pracy miesiecznie (aktualnie: " << godzin_w_miesiacu << "): ";
	cin >> godzin_w_miesiacu;

	cout << "\nZarobki miesieczne: " << (double)godzin_w_miesiacu * na_godzine << "\n";
}

void HourlyEmployee::printInfo(){
	cout << "\nDane pracownika";
	cout << "\n" << imie << " " << nazwisko;
	cout << "\nZarobki za godzine pracy: " << na_godzine;
	cout << "\nLiczba godzin pracy w miesiacu: " << godzin_w_miesiacu;
	cout << "\nZarobki miesieczne: " << (double)godzin_w_miesiacu * na_godzine;
}

void HourlyEmployee::hire(){
	cout << "\nZatrudnianie pracownika na godziny:";
	cout << "\nPodaj dane pracownika";
	cout << "\nPodaj imie: ";
	cin >> imie;
	cout << "\nPodaj naziwsko: ";
	cin >> nazwisko;
	cout << "\nPodaj zarobki na godzine: ";
	cin >> na_godzine;
	cout << "\nPodaj ilosc godzin pracy miesiecznie";
	cin >> godzin_w_miesiacu;
	cout << "\nPodaj date zatrudnienia";
	cout << "\nDzien: ";
	cin >> data_zatrudnienia.day;
	cout << "\nMiesiac: ";
	cin >> data_zatrudnienia.month;
	cout << "\nRok: ";
	cin >> data_zatrudnienia.year;
>>>>>>> 66ad7b7d9f336b3ad50dd0f125e05f0c6bc267b3

}
