#include "HourlyEmployee.h"

HourlyEmployee::HourlyEmployee() {
	hire();
}
HourlyEmployee::HourlyEmployee(string i, string n, double z, unsigned int h, unsigned short int d, unsigned short int m, unsigned int y){
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

}
