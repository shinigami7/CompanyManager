#include "Company.h"

Company::Company() {
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
	}

}

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
		}
	}
}

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
	}
	cout << "\n";
}
