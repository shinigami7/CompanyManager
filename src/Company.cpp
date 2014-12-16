#include "Company.h"

Company::Company() {
	cout << "\nBrak pracownikow firmie";
	Executive nowy;
	pracownicy.push_back(nowy);
}
Company::Company(const char * data){
	fstream plik;
	plik.open(data, ios::in);

	if(plik.good()){
		while(!plik.eof()){
			string linia;
			getline(plik, linia);
			istringstream iss(linia);

			char jak;
			iss >> jak;

			switch(jak){
			case 'H':
				{
					string i, n;
					double per_h;
					unsigned int godz;
					unsigned short int d,m;
					unsigned int y;
					iss >> i >> n >> per_h >> godz >> d >> m >> y;
					Employee *nowy = new HourlyEmployee(i, n, per_h, godz, d, m, y);
					pracownicy.push_back(*nowy);
					delete nowy;
				}
				break;
			case 'E':
				{
					string i, n;
					double u;
					unsigned int s;
					double na_spot;
					unsigned short int d,m;
					unsigned int y;

					iss >> i >> n >> u >> s >> na_spot >> d >> m >> y;
					Employee *nowy = new Executive(i, n, u, s, na_spot, d, m, y);
					pracownicy.push_back(*nowy);
					delete nowy;
				}
				break;
			default:
				cout << "Blad oczytu danych!";
			}
		}
		plik.close();
	} else {
		cout << "Blad odczytu pliku\n";
	}

}

Company::~Company() {
	//TODO saving to file
	pracownicy.clear();
}
void Company::zarzadzaj() {
	bool zakoncz = false;
	while(!zakoncz)
	{
		cout << "Menu firmy:\n";
		cout << "1. Zatrudnij pracownika\n";
		cout << "2. Zwolnij pracownika\n";
		cout << "3. Wypisz dane wszystkich pracownikow\n";
		cout << "0. Zakoncz\n";
		cout << "Twoj wybor: ";
		char opcja;
		cin >> opcja;

		switch(opcja){
		case '1':
			zatrudnij();
			break;
		case '2':
			zwolnij();
			break;
		case '3':
			wyswietl();
			break;
		case '0':
			zakoncz = true;
			break;
		default:
			cout << "\nNie wybrales poprawnej opcji.";
		}
	}
}

void Company::zatrudnij(){
	cout << "\nKogo chcesz zatrudnic?";
	cout << "\n1. Dyrektora";
	cout << "\n2. Pracownika na godziny";
	cout << "\nWybor: ";
	char c;
	cin >> c;

	switch(c){
	case '1':
		{
			Executive nowy;
			pracownicy.push_back(nowy);
		}
		break;
	case '2':
		{
			HourlyEmployee nowy;
			pracownicy.push_back(nowy);
		}
		break;
	default:
		cout << "\nBrak wlasciwego wyboru";
	}
}
void Company::zwolnij(){
	//TODO zwalnianie pracowników
}
void Company::wyswietl(){
	cout << "\nLISTA PRACOWNIKOW\n";
	for(unsigned int i = 0 ; i < pracownicy.size() ; i++){
		cout << "\n" << i+1 << "\t";
		pracownicy[i].tableInfo();
	}
	cout << "\n";
}
