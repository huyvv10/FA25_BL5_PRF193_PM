#include <iostream>
#include "PartTimeEmployee.h"

using namespace std;

PartTimeEmployee::PartTimeEmployee(int _id, const string& _name, int _yob, int _hours, double _rate) : Employee(_id,_name,_yob){
	hours=_hours;
	rate=_rate;
}

double PartTimeEmployee::calculateSalary() const{
	return hours*rate;
}

PartTimeEmployee::~PartTimeEmployee(){
}

void PartTimeEmployee::input(){
	int id_temp, yob_temp; 
	string name_temp;
	cout<<"Input employee Id: "; cin>>id_temp; cin.ignore(); setId(id_temp);
	cout<<"Input employee name: "; getline(cin, name_temp); setName(name_temp);
	cout<<"Input employee year of birth: "; cin>>yob_temp; setYob(yob_temp);
	cout<<"Input employee working hours: "; cin>>hours;
	cout<<"Input employee working rate: "; cin>>rate;
	cin.ignore();
}

void PartTimeEmployee::display() {
    Employee::display(); 
    cout << " - Type: Part Time - Hours: " << hours << " - Rate: " << rate << " - Calculated Salary: " << calculateSalary() << endl;
}
