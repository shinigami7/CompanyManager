#include "Executive.h"

Executive::Executive() {
	hire();
}
Executive::Executive(string i, string n, double u, unsigned int s, double z, unsigned short int d, unsigned short int m, unsigned int y){
<<<<<<< HEAD
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
=======
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
>>>>>>> 66ad7b7d9f336b3ad50dd0f125e05f0c6bc267b3
}
