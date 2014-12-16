#include "Executive.h"

Executive::Executive() {
	hire();
}
Executive::Executive(string i, string n, double u, unsigned int s, double z, unsigned short int d, unsigned short int m, unsigned int y){
	imie = i;
	nazwisko = n;
	procent_udzialow = u;
	spotkan_miesiecznie = s;
	zarobki_za_spotkanie = z;
	data_zatrudnienia.day = d;
	data_zatrudnienia.month = m;
	data_zatrudnienia.year = y;
}

void Executive::raiseSalary(){
	cout << "\nZmiana warunkow zatrudnienia dyrektora";
	cout << "\nWartosc udzialow [aktualnie " << procent_udzialow << "%]: ";
	cin >> procent_udzialow;
	cout << "\nIlosc spotkan w miesiacu: ";
	cin >> spotkan_miesiecznie;
	cout << "\nZarobki za spotkanie";
	cin >> zarobki_za_spotkanie;
}
void Executive::printInfo(){
	cout << "\nDyrektor";
	cout << "\n" << imie << " " << nazwisko;
	cout << "\nIlosc udzialow: " << procent_udzialow << "%";
	cout << "\nIlosc spotkan miesiecznie: " << spotkan_miesiecznie;
	cout << "\nZarobki za spotkanie: " << zarobki_za_spotkanie;
}

void Executive::hire(){
	cout << "\nZatrudnianie pracownika na godziny:";
	cout << "\nPodaj dane pracownika";
	cout << "\nPodaj imie: ";
	cin >> imie;
	cout << "\nPodaj naziwsko: ";
	cin >> nazwisko;
	cout << "\nPodaj ilosc udzialow: ";
	cin >> procent_udzialow;
	cout << "\nPodaj ilosc spotkan miesiecznie: ";
	cin >> spotkan_miesiecznie;
	cout << "\nPodaj zarobki za spotkanie: ";
	cin >> zarobki_za_spotkanie;
	cout << "\nPodaj date zatrudnienia: ";
	cout << "\nDzien: ";
	cin >> data_zatrudnienia.day;
	cout << "\nMiesiac: ";
	cin >> data_zatrudnienia.month;
	cout << "\nRok: ";
	cin >> data_zatrudnienia.year;
}
