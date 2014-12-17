#include "Company.h"

Company::Company() {
<<<<<<< HEAD
	cout << "\nAny employee doesn't exist in your company!";
	Executive n;
	employees.push_back(n);
}
Company::Company(const char * path){
	fstream file;
	file.open(path, ios::in);

	if(file.good()){
		while(!file.eof()){
			string line;
			getline(file, line);
			istringstream iss(line);

			char which_employee;
			iss >> which_employee;

			if(which_employee == 'H')
			{
				string i, n;
				double per_h;
				unsigned int hours;
				unsigned short int d,m;
				unsigned int y;
				iss >> i >> n >> per_h >> hours >> d >> m >> y;
				Employee *hourlyEmployee = new HourlyEmployee(i, n, per_h, hours, d, m, y);
				employees.push_back(*hourlyEmployee);
				delete hourlyEmployee;
			} else if(which_employee == 'E'){
				string i, n;
				double u;
				unsigned int s;
				double per_meet;
				unsigned short int d,m;
				unsigned int y;

				iss >> i >> n >> u >> s >> per_meet >> d >> m >> y;
				Employee *worker = new Executive(i, n, u, s, per_meet, d, m, y);
				employees.push_back(*worker);
				delete worker;
			} else {
				cout << "Data read error!";
			}
		}
		file.close();
	} else {
		cout << "File read error\n";
=======
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
>>>>>>> 66ad7b7d9f336b3ad50dd0f125e05f0c6bc267b3
	}

}

<<<<<<< HEAD
void Company::manage() {
	bool end = false;
	while(!end)
	{
		cout << "Managing:\n";
		cout << "1. Hire employee\n";
		cout << "2. Fire employee\n";
		cout << "3. Print all employees\n";
		cout << "0. Exit\n";
		cout << "Your choose: ";
		char option;
		cin >> option;

		if(option == '1'){
			hire();
		} else if(option == '2'){
			fire();
		} else if(option == '3'){
			print();
		} else if(option == '4'){
			end = true;
		} else {
			cout << "\nYou don't choose correct option.";
=======
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
>>>>>>> 66ad7b7d9f336b3ad50dd0f125e05f0c6bc267b3
		}
	}
}

<<<<<<< HEAD
void Company::hire(){
	cout << "\nWho do you want to hire?";
	cout << "\n1. Executive";
	cout << "\n2. Hourly employee";
	cout << "\nChoose: ";
	char c;
	cin >> c;

	if( c == '1'){
			Executive n;
			employees.push_back(n);
	} else if( c == '2'){
			HourlyEmployee n;
			employees.push_back(n);
	} else {
		cout << "\nIncorrect choose.";
	}
}
void Company::fire(){
	//TODO zwalnianie pracowników
}
void Company::print(){
	cout << "\nEMPLOYEES LIST\n";
	for(unsigned int i = 0 ; i < employees.size() ; i++){
		cout << "\n" << i+1 << "\t";
		employees[i].tableInfo();
=======
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
>>>>>>> 66ad7b7d9f336b3ad50dd0f125e05f0c6bc267b3
	}
	cout << "\n";
}
